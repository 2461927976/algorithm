/*
1,每一行都必须放一个黑皇后、一个白皇后。 
2,从第一行到最后一行，先把黑皇后放好，再放白皇后。（当然不只这种放法） 
3,放的时候注意的是0的地方不能放，放过的地方不能放。
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
        //不能放的或者已经放过的 
        if(s[i][j]==0||s[i][j]==2)
        {
            continue;
        }
        int flag=1;//默认可以放 
        int y1=j-1;
        int y2=j+1;
        for(int l=i-1;l>=0;l--)
        {
            //判断同一列、斜线上是否有相同皇后（同行肯定不会有：从上到下进行的） 
            //同一列
            if(s[l][j]==q)
            {
                flag=0;
                break;
            }
            //斜线
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
            s[i][j]=q;//放皇后 
            if(i<n-1)
            {
                dfs(i+1,q);
            } 
            else
            {
                //黑皇后放完了，开始放白皇后；
                //白皇后放完的话就是一种方法结束 
                if(q==2)
                {
                    dfs(0,3);
                }
                else
                {
                    count++;
                }
            }
            s[i][j]=1;//复原开始下一次 
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
    dfs(0,2);//黑皇后 
    cout<<count<<endl;
    return 0;
}
