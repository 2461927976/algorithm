#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double a[31][31]={0};
	double max=0,min=99999999;
	double result=0;
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<30;i++){
			for(int j=0;j<=i;j++){
				if(j==0){
					a[i][j]+=a[i-1][j]/2;
				}
				else{
					a[i][j]+=(a[i-1][j-1])/2+(a[i-1][j])/2;
				}
			}
		}
	for(int i=0;i<30;i++){
		if(max<a[29][i]){
			max=a[29][i];
		}
		if(min>a[29][i]){
			min=a[29][i];
		}
	}
	result=2086458231/min*max;
	cout<<result;
	return 0;
}
