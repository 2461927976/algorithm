#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int n=0,f1=1,f2=1,fn=0;
	cin>>n;
	if(n==1||n==2){
		fn=1;
	}
	else{
		for(long int i=3;i<=n;i++){
			fn=f1+f2;
			f1=f2;
			f2=fn;
		}
	}
	cout<<(fn%10007)<<endl;
	return 0;
}
