/*
1,ÿһ�ж������һ���ڻʺ�һ���׻ʺ� 
2,�ӵ�һ�е����һ�У��ȰѺڻʺ�źã��ٷŰ׻ʺ󡣣���Ȼ��ֻ���ַŷ��� 
3,�ŵ�ʱ��ע�����0�ĵط����ܷţ��Ź��ĵط����ܷš�
������Ϊ����N�ʺ������ֱ��������ѡ�������ܺͣ������ǣ���ͬ�ŷ���������ͬ��ʹ�õ㣩 
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
        //���ܷŵĻ����Ѿ��Ź��� 
        if(s[i][j]==0||s[i][j]==2)
        {
            continue;
        }
        int flag=1;//Ĭ�Ͽ��Է� 
        int y1=j-1;
        int y2=j+1;
        for(int l=i-1;l>=0;l--)
        {
            //�ж�ͬһ�С�б�����Ƿ�����ͬ�ʺ�ͬ�п϶������У����ϵ��½��еģ� 
            //ͬһ��
            if(s[l][j]==q)
            {
                flag=0;
                break;
            }
            //б��
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
            s[i][j]=q;//�Żʺ� 
            if(i<n-1)
            {
                dfs(i+1,q);
            } 
            else
            {
                //�ڻʺ�����ˣ���ʼ�Ű׻ʺ�
                //�׻ʺ����Ļ�����һ�ַ������� 
                if(q==2)
                {
                    dfs(0,3);
                }
                else
                {
                    count++;
                }
            }
            s[i][j]=1;//��ԭ��ʼ��һ�� 
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
    dfs(0,2);//�ڻʺ� 
    cout<<count<<endl;
    return 0;
}
