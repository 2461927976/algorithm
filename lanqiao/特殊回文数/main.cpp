#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[5],n;
	cin>>n;
	for(int i=100;i<1000;i++){
		arr[0]=i/100;
		arr[1]=(i/10)%10;
		arr[2]=i%10;
		if((arr[0]+arr[1])*2+arr[2]==n){
			cout<<arr[0]<<arr[1]<<arr[2]<<arr[1]<<arr[0]<<endl;
		}
	}
	for(int i=100;i<1000;i++){
		arr[0]=i/100;
		arr[1]=(i/10)%10;
		arr[2]=i%10;
		if((arr[0]+arr[1]+arr[2])*2==n){
			cout<<arr[0]<<arr[1]<<arr[2]<<arr[2]<<arr[1]<<arr[0]<<endl;
		}
	}
	return 0;
}
