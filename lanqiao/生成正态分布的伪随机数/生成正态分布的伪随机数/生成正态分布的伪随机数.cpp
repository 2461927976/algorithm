// 生成正态分布的伪随机数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<fstream> 
#include<ctime> 
using namespace std;

const double PI=3.1415926;
double ND_BoxMuller(double u=0,double t=1){
	double x1=double(rand())/RAND_MAX;
	double x2=double(rand())/RAND_MAX;
	double x=u+t*sqrt(-2.0*log(x1))*cos(2*PI*x2);
	return x; 
}
double ND_CentralLimit(double u,double t){
	double total=0;
	for(int i=0;i<12;i++){
		total+=double(rand())/RAND_MAX;
	}
	double x=u+t*(total-6);
	return x;
}
void showRandom(double arr[],int num){
	for(int i=0;i<num;i++){
		cout<<arr[i]<<endl;
	}
}
void DatatoFile(double a[],double b[],int num){
	ofstream out("SPSS 数据.txt");
	for(int i=0;i<num;i++){
		out<<a[i]<<" "<<b[i]<<endl;
	}
	out.close();
}
int _tmain(int argc, _TCHAR* argv[])
{
	const int N=100;
	double Xm[N],Xc[N];
	double u=2.0,t=3.5;
	srand((unsigned int)time(0));
	for(int i=0;i<N;i++){
		Xm[i]=ND_BoxMuller(u,t);
		Xc[i]=ND_CentralLimit(u,t);
	}
	DatatoFile(Xm,Xc,N);
	cout<<"Box Muller算法："<<endl;
	showRandom(Xm,5);
	cout<<"中心极限算法："<<endl;
	showRandom(Xc,5); 
	system("pause");
	return 0;
}

