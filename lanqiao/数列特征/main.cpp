#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,arr[10000],max,min,sum=0,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
		sum+=arr[i];
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<sum;
	return 0;
}
