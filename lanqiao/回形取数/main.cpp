#include <string.h>  
#include <iostream>  
using namespace std;  
int main()  
{  
    int m,n;  
    cin>>m>>n;  
    int num[m][n],temp[m][n];  
    memset(temp,0,sizeof(temp));  
    for(int i = 0;i < m;i++){  
        for(int j = 0;j < n;j++){ 
            cin>>num[i][j]; 
		} 
	} 
    int a = 0,b = 0,tot = 0;  
    while(tot < m * n) //Ñ­»·  
    {  
        while(a < m && num[a][b] != -1) //ÍùÏÂ  
        {  
            cout<<num[a][b]<<" ";  
            num[a][b] = -1;  
            a++;tot++;  
        }
        a--; 
        b++;  
        while(b < n && num[a][b] != -1) //ÍùÓÒ  
        {  
            cout<<num[a][b]<<" ";  
            num[a][b] = -1;  
            b++;tot++;  
        }  
        b--;  
        a--;  
        while(a >= 0 && num[a][b] != -1) //ÍùÉÏ  
        {  
            cout<<num[a][b]<<" ";  
            num[a][b] = -1;  
            a--;tot++;  
        }  
        a++;  
        b--;  
        while(b >= 0 && num[a][b] != -1) //Íù×ó  
        {  
            cout<<num[a][b]<<" ";  
            num[a][b] = -1;  
            b--;tot++;  
        }  
        b++;  
        a++;  
    }  
    return 0;  
}  
