#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j,k,l,n;
	int a[100];
	int count=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=n;i>1;i--){
		k=0,l=1;
		if(a[0]<a[1]){
			k=1,l=0;
		}
		for(j=2;j<i;j++){
			if(a[j]<=a[k]){
				if(a[j]<a[l]){
					k=l;l=j;
				}
				else{
					k=j;
				}
			}
		}
		a[l]+=a[k];
		count+=a[l];
		for(j=k;j<i-1;j++){
			a[j]=a[j+1];
		}
	}
	cout<<count;
	return 0;
}
