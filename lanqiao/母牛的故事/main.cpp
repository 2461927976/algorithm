#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int a,b,c,d;
	a=b=c=d=1;
	while(cin>>n){
		if(n==0){
			break;
		}
		if(n<=4){
			cout<<n<<endl;
		}
		else{
			n=n-4;
			for(int i=0;i<n;i++){
				d=c+d;
				c=b;
				b=a;
				a=d; 
			}
			cout<<a+b+c+d<<endl;
		}
	}
	return 0;
}
