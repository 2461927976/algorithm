#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void InsertSort(int *num,int n){
	int i=0,j=0,temp=0;
	for(i=1;i<n;i++){
		temp=num[i];
		j=i-1;
		while(j>=0&&temp<num[j]){  //注意判断条件为两个，j>=0对其进行边界限制，第二个为插入判断条件 
			num[j+1]=num[j];
			j--; 
		}
		num[j+1]=temp; // 找到合适位置，将元素插入
	}
} 
int main(int argc, char** argv) {
	int i=0;
	int num[8]={9,3,4,2,6,7,5,1};
	InsertSort(num,8);
	for(i=0;i<8;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}  
