#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double x[7]={-2.9999,-2.4486,-2.1599,-1.9893,-1.8687,-1.7734,-1.6990};
double fx[7]={4.32,5.02,5.39,5.26,5.10,4.84,4.76};
double area=0;
double trapezoidal(int a,int b){
	area=(fx[a]+fx[b])*(x[a]-x[b])/2;
	return area;
}
int main(int argc, char *argv[]) {
	double sum=0;
	int count=0;
	//trapezoidal(1,0);
	//cout<<"该梯形的面积是："<<area;
	for(int i=7;i>0;i--){
		//trapezoidal(i,i-1);
		sum+=trapezoidal(i,i-1);
		count++;
	}
	cout<<"循环次数为："<<count<<endl;
	cout<<sum<<endl;
	return 0;
}
