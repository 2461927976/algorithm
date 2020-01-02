#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[4];
	for(int i=10;i<100;i++){
		arr[0]=i/10;
		arr[1]=i%10;
		cout<<arr[0]<<arr[1]<<arr[1]<<arr[0]<<endl;
	}
	return 0;
}
