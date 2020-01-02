#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void SelectSort(int *num,int n){
	int i=0,j=0,min=0,temp=0;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i;j<n;j++){
			if(num[min]>num[j]){
				min=j;
			}
		}
		if(min!=i){
			temp=num[min];
			num[min]=num[i];
			num[i]=temp;
		}
	}
} 

int main(int argc, char** argv) {
	int num[6]={5,4,3,2,9,1};
	SelectSort(num,6);
	for(int i=0;i<6;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
