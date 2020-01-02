#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,nums[201],temp,i;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	for(int j=1;j<=n-1;j++){
		for(int i=1;i<=n-j;i++){
			if(nums[i]>nums[i+1]){
				temp=nums[i];
				nums[i]=nums[i+1];
				nums[i+1]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<nums[i]<<" ";
	} 
	return 0;
}
