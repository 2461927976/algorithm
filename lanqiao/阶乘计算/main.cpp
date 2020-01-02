#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*int n,arr[3000],a=1;//n的阶乘的位数等于lg1+lg2+lg3+lg4+...+lgn; 
	cin>>n;
	for(int i=1;i<=n;i++){
		a*=i;
	}
	cout<<a;*/
	int num[3000]={0};
	int mid_num[3000]={0};
	int num_length=1;
	int mid_num_length=0;
	int n;
	cin>>n;
	num[0]=1; 
	for(int i=1;i<=n;i++){
		for(int j=0;j<num_length;j++){
			int temp=i*num[j];
			int k=j;
			while(1){
				temp+=mid_num[k];
				mid_num[k]=temp%10;
				temp=temp/10;
				k++;
				if(temp==0){
					break;
				}
			}
			mid_num_length=k;
		}
		num_length=mid_num_length;
		for(int i=num_length-1;i>=0;i--){
			num[i]=mid_num[i];
		}
		for(int i=0;i<mid_num_length;i++){
			mid_num[i]=0;
		}
	}
	for(int i=num_length-1;i>=0;i--){
		cout<<num[i];
	}
	return 0;
}
