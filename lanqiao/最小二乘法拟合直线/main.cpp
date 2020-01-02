#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void line(double abr[],double x[],double y[],int n){
	double xsum=0,ysum=0,xysum=0,x2sum=0;
	for(int i=0;i<n;i++){
		xsum+=x[i];
		ysum+=y[i];
		x2sum+=x[i]*x[i];
		xysum+=xsum*ysum;
	}
	abr[0]=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);
	abr[1]=(ysum-abr[0]*xsum)/n;
}
int main(int argc, char** argv) {
	int const N=10;
//	double x[N]={208,152,113,227,137,238,178,104,191,130};
//	double y[N]={21.6,15.5,10.4,31.0,13.0,32.4,19.0,10.4,19.0,11.8};
	double x[N]={0,1,2,3,4,5,6,7,8,9};
	double y[N]={0,1,2,3,4,5,6,7,8,9};
	double abr[3]={0};
	line(abr,x,y,N);
	cout<<"ÄâºÏÖ±Ïß£º\nf(x)="<<abr[0]<<"x"<<abr[1]<<endl; 
	return 0;
}
