#include <iostream>
using namespace std; 

#define M  6
#define N  10
int i=0;
int j=0;

float line(float x,float x1, float x2, float y1, float y2)
{
	float y;
	y=(y2-y1)*(x-x1)/(x2-x1)+y1;
	return y;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	while(1)
	{
	float X[M]={0.04,0.1,0.15,0.2,0.25,0.3};
	float Y[N]={6,3,2,1.5,1.2,1.1,1.05,1.03,1.02,1.01};
	float Z[M][N]={
		             {2.59,2.40,2.33,2.21,2.09,2.00,1.88,1.80,1.72,1.01},
                     {1.88,1.80,1.73,1.68,1.62,1.59,1.53,1.49,1.44,1.36},
					 {1.64,1.59,1.55,1.52,1.48,1.46,1.42,1.38,1.34,1.26},
					 {1.49,1.46,1.44,1.42,1.39,1.38,1.34,1.31,1.27,1.20},
					 {1.39,1.37,1.35,1.34,1.33,1.31,1.29,1.27,1.22,1.17},
                     {1.32,1.31,1.30,1.29,1.27,1.26,1.25,1.23,1.20,1.14}};
	float Xk=0;
	float Yk=0;
	float Zk=0;
	float E=0;
	float F=0;
	float K=0;
	 cout<<"请输入r/d: " <<endl;
	 cin>>Xk;
	 cout<<"请输入D/d: " <<endl;
	 cin>>Yk;
	 if(Xk<X[0]||Xk>X[5]||Yk>Y[0]||Yk<Y[10])
	 {
		 cout<<"输入轴间系数无效，请重新输入 " <<endl;
	 }
	 else
	 {
		  for(i=1;i<6;i++)
		 {
			 if( Xk <= X[i])
			 {
				 i=i-1;
				 break;
			 }
		 }

		 for(j=1;j<10;j++)
		 {
			 if( Yk >= Y[j])
			 {
				 j=j-1;
				 break;
			 }
		 }
		 E=line(Xk,X[i], X[i+1],Z[i][j],Z[i+1][j]);
		  cout<<"第一次插值E： " <<endl;
		 cout<<E<<endl;
		 F=line(Xk,X[i], X[i+1],Z[i][j+1],Z[i+1][j+1]);
		  cout<<"第一次插值F： " <<endl;
		 cout<<F<<endl;
		 K=line(Yk,Y[i], Y[i+1],E,F);
		  cout<<"轴肩圆角处理理论应力集中系数： " <<endl;
		 cout<<K<<endl;
	 }
	}
}
