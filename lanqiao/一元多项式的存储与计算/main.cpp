#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double fx(int a[],double y){
	int t=1;
	double result=a[6];
	for(int i=5;i>=0;i--){
		t*=y;
		result+=a[i]*t;
	}
	return result;
}


int main(int argc, char** argv) {
	int a[7]={3,7,-3,2,7,-7,-15};
	//double x[6]={-2.0,-0.5,1.0,2.0,3.7,4.0};
	double y;
	cin>>y;
	cout<<fx(a,y); 
	return 0;
}
