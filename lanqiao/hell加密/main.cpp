#include <iostream>
#include <cstring>
#include <cstdlib>
#define N 100
using namespace std;

//按第一列展开，递归计算行列式值 
int caluDet(int n, int **a)
{
    int i, r, c, p, q;
    int sum=0;
    if(n==1) 
        return a[0][0];
    int **det = (int**)malloc((n-1)*sizeof(int*));
    for(i=0; i<(n-1); i++)  
        det[i] = (int*)malloc((n-1)*sizeof(int));
    for(i=0; i<n; i++) {
        for(r=0; r<n-1; r++) {         //子矩阵 (n-1) 行
            if(r<i) p = 0;              //当前行 a[r] 赋值给子矩阵
            else    p = 1;             //下一行 a[r+1] 赋值给子矩阵
            for(c=0; c<n-1; c++)        //子矩阵 (n-1) 列
                det[r][c] = a[r+p][c+1]; 
        }
        if(i%2==0) q = 1;               //由于是对第一列展开，即 [i][0]
        else q = -1;
        sum = sum + a[i][0] * q*caluDet(n-1,det);
    }
    for(i=0; i<(n-1); i++)  
        free(det[i]); 
    free(det);
    return sum;
}

//初始化明文
void initPlain(char p[], int n)
{
    int i, len, t;
    cout << "输入明文p: \n";
    getchar(); gets(p);
    for(i=0; i<strlen(p); i++) {  
        if (p[i] ==' ')             //跳过空格  
            strcpy(p+i,p+i+1); 
        if (p[i]>='a' && p[i]<='z')  //小写转大写 
            p[i] -= 32; 
    }
    len = strlen(p); 
    t = len%n>0 ? n-len%n : len%n;
    while(t--)     //若最后一个明文对字母不足，则添加与最后一个明文相同的字母 
        p[strlen(p)] = p[len-1]; 
    p[strlen(p)] = '\0';
    cout <<"\nInit P: " << p << endl;   
}

//输入密钥矩阵
void keyMatrix(int **det, int len)
{
    int i, j;
    for(i=0; i<len; i++)  
        for(j=0; j<len; j++) 
            cin >> det[i][j]; 
}

//分组、矩阵乘法
void matricMultiply(char p[], char c[], int **key, int n) 
{
    int i,j,k;
    int len = strlen(p);
    for(i=0; i<strlen(p)/n; i++){       //明文每 n 个作为一行 
        for(j=0; j<n; j++){             //明文的列、密钥矩阵的列 
            for(k=0; k<n; k++){         //密钥矩阵的行 
                c[n*i+j] += ((p[n*i+k]-'A') * key[k][j]) % 26;
            }
            c[n*i+j] = c[n*i+j] % 26 + 'A'; 
            //cout << (int)c[n*i+j] << " ";
        }
    }
    cout << "Cipher: " << c << endl;    
}

int main()
{
    int i, j, n, len;
    char p[N]={0}, c[N]={0};
    cout << "输入密钥的阶：\n";
    cin >> n;
    //为密钥矩阵申请内存空间 
    int **key = (int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++) 
        key[i] = (int*)malloc(n*sizeof(int)); 
    //获取密钥矩阵并验证是否可逆 
    cout << "输入" <<n<<"阶密钥矩阵：\n";
    keyMatrix(key,n);   
    while(!caluDet(n, key)) {
        cout << "密钥不存在逆矩阵! 请重新输入：\n";
        keyMatrix(key,n);
    } 
    //初始化明文 
    initPlain(p, n);
    len = strlen(p); 
    //各组明文乘密钥矩阵加密
    matricMultiply (p, c, key, n);
    //释放密钥矩阵的内存空间 
    for(i=0; i<n; i++)  
        free(key[i]); 
    free(key);
    return 0;
}
