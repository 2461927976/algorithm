#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double fx(double x){
	return x*x-x-2;
}
int main(int argc, char *argv[]) {
	const double eps=0.00001; 
	double L,R,M,temp;
	double fL,fR;
	cin>>L;
	cin>>R;
	M=(L+R)/2;
	if(fx(L)*fx(R)>0){
		cout<<"函数解不在此区间中"; 
	}
	else{
		while((fx(R)-fx(L))>=eps){
			if(fx(M)>0){
				R=M;
			}
			else if(fx(M)<0){
				L=M;
			}
			M=(L+R)/2;
		}
		cout<<"该函数的一个解为："<<M;
	}
	return 0; 
}
