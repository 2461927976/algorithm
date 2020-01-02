#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10]={0};
	int k=0;
	for(int i=2;i<10000;i++){
		int count=0;
		for(int j=1;j<i;j++){
			if(0==i%j){
				count++;
			}
		}
		if(1==count){
			a[k++]=i;
		}
		if(10==k){
			break;
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
