#include <iostream>
#include <cstring>
#include <cstdlib>
#define N 100
using namespace std;

//����һ��չ�����ݹ��������ʽֵ 
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
        for(r=0; r<n-1; r++) {         //�Ӿ��� (n-1) ��
            if(r<i) p = 0;              //��ǰ�� a[r] ��ֵ���Ӿ���
            else    p = 1;             //��һ�� a[r+1] ��ֵ���Ӿ���
            for(c=0; c<n-1; c++)        //�Ӿ��� (n-1) ��
                det[r][c] = a[r+p][c+1]; 
        }
        if(i%2==0) q = 1;               //�����ǶԵ�һ��չ������ [i][0]
        else q = -1;
        sum = sum + a[i][0] * q*caluDet(n-1,det);
    }
    for(i=0; i<(n-1); i++)  
        free(det[i]); 
    free(det);
    return sum;
}

//��ʼ������
void initPlain(char p[], int n)
{
    int i, len, t;
    cout << "��������p: \n";
    getchar(); gets(p);
    for(i=0; i<strlen(p); i++) {  
        if (p[i] ==' ')             //�����ո�  
            strcpy(p+i,p+i+1); 
        if (p[i]>='a' && p[i]<='z')  //Сдת��д 
            p[i] -= 32; 
    }
    len = strlen(p); 
    t = len%n>0 ? n-len%n : len%n;
    while(t--)     //�����һ�����Ķ���ĸ���㣬����������һ��������ͬ����ĸ 
        p[strlen(p)] = p[len-1]; 
    p[strlen(p)] = '\0';
    cout <<"\nInit P: " << p << endl;   
}

//������Կ����
void keyMatrix(int **det, int len)
{
    int i, j;
    for(i=0; i<len; i++)  
        for(j=0; j<len; j++) 
            cin >> det[i][j]; 
}

//���顢����˷�
void matricMultiply(char p[], char c[], int **key, int n) 
{
    int i,j,k;
    int len = strlen(p);
    for(i=0; i<strlen(p)/n; i++){       //����ÿ n ����Ϊһ�� 
        for(j=0; j<n; j++){             //���ĵ��С���Կ������� 
            for(k=0; k<n; k++){         //��Կ������� 
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
    cout << "������Կ�Ľף�\n";
    cin >> n;
    //Ϊ��Կ���������ڴ�ռ� 
    int **key = (int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++) 
        key[i] = (int*)malloc(n*sizeof(int)); 
    //��ȡ��Կ������֤�Ƿ���� 
    cout << "����" <<n<<"����Կ����\n";
    keyMatrix(key,n);   
    while(!caluDet(n, key)) {
        cout << "��Կ�����������! ���������룺\n";
        keyMatrix(key,n);
    } 
    //��ʼ������ 
    initPlain(p, n);
    len = strlen(p); 
    //�������ĳ���Կ�������
    matricMultiply (p, c, key, n);
    //�ͷ���Կ������ڴ�ռ� 
    for(i=0; i<n; i++)  
        free(key[i]); 
    free(key);
    return 0;
}
