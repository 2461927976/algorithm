#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,arr[1000],m,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	for(i=0;i<n;i++){
		if(arr[i]==m){
			cout<<i+1;
			break;
		}
		if(i+1==n){
			cout<<-1;
		}
	}
	return 0;
}
