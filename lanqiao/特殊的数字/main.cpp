#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	for(int i=100;i<1000;i++){
		a=i/100;
		b=(i-100*a)/10;
		c=(i-100*a-10*b);
		if((a*a*a+b*b*b+c*c*c)==i){
			cout<<i<<endl;
		}
	}
	return 0;
}
