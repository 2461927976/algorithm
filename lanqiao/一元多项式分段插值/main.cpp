#include <iostream>
#include<cstdlib>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const double x[7]={1.0,1.5,2.3,3.5,5.0,6.2,7.0};
const double fx[7]={0.8,1.0,2.0,2.5,1.6,1.8,1.4};
double Linear(double xx,int L){
	double y;
	y=fx[L]*(xx-x[L+1])/(x[L]-x[L+1])+fx[L+1]*(xx-x[L])/(x[L+1]-x[L]);
	return y;
}
double Parabola(double xx,int L){
	double y;
	y=fx[L]*(xx-x[L+1])*(xx-x[L+2])/((x[L]-x[L+1])*(x[L]-x[L+2]))+fx[L+1]*(xx-x[L])*(xx-x[L+2])/((x[L+1]-x[L])*(x[L+1]-x[L+2]))+
	fx[L+2]*(xx-x[L])*(xx-x[L+1])/((x[L+2]-x[L])*(x[L+2]-x[L+1]));
	return y;
}
int main(int argc, char** argv) {
	double xx=0;
	cout<<"输入-1结束"<<endl;
	while(xx!=-1){
		cout<<"输入插值点：";
		cin>>xx;
		if(xx==-1){
			cout<<"结束\n";
			system("pause");
			return 0; 
		}
		if(xx<1||xx>7){
			cout<<"插值点越界！\n";
			continue;
		}
		if(xx>x[4]){
			cout<<"f(x)="<<Parabola(xx,4)<<endl;
		}
		else if(xx>x[3]){
			cout<<"f(x)="<<Linear(xx,3)<<endl;
		}
		else if(xx>x[2]){
			cout<<"f(x)="<<Linear(xx,2)<<endl;
		}
		else{
			cout<<"f(x)="<<Parabola(xx,0)<<endl;
		}
	}
	system("pause");
	return 0;
}
