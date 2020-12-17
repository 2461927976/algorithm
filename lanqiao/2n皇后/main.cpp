/*
1. 每一行都必须放一个黑皇后、一个白皇后。 
2. 从第一行到最后一行，先把黑皇后放好，再放白皇后。（当然不只这种放法） 
3. 放的时候注意的是0的地方不能放，放过的地方不能放。
（本以为是在N皇后基础上直接是有序选两个的总和，并不是：不同放法可能有相同的使用点） 
*/
#include<iostream>
using namespace std;
int s[13][13];
int n;
int count=0;
void dfs(int i,int q)
{
    for(int j=0;j<n;j++)
    {
        if(s[i][j]==0||s[i][j]==2)
        {
            continue;
        }
        int flag=1;
        int y1=j-1;
        int y2=j+1;
        for(int l=i-1;l>=0;l--)
        {
            if(s[l][j]==q)
            {
                flag=0;
                break;
            }
            if(y1>=0&&s[l][y1]==q)
            {
                flag=0;
                break;
            }
            y1--;    
            if(y2<n&&s[l][y2]==q)
            {
                flag=0;
                break;
            }
            y2++;
        }
        if(flag)
        {
            s[i][j]=q;
            if(i<n-1)
            {
                dfs(i+1,q);
            } 
            else
            {
                if(q==2)
                {
                    dfs(0,3);
                }
                else
                {
                    count++;
                }
            }
            s[i][j]=1;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    dfs(0,2);
    cout<<count<<endl;
    return 0;
}
