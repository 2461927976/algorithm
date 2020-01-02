#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5]={0};
	int temp;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
//冒泡排序就是沉底的方法 
