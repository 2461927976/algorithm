#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool isprime(long long n){
	if(n<2||n%2==0){
		return false;
	}
	for(int i=3;i*i<=n;i+=2){   //为什么这里不用i++，而是用i=i+2，是因为i++可能为偶数，i%2如果模不尽，i%4/6/8就更不可能模得尽，所以没必要i++，所以直接模基数就够了 
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	for(int d=2;d<1000;d++){
		for(int n=2;n<1000;n++){
			if(isprime(n)
			&&isprime(n+d)
			&&isprime(n+2*d)
			&&isprime(n+3*d)
			&&isprime(n+4*d)
			&&isprime(n+5*d)
			&&isprime(n+6*d)
			&&isprime(n+7*d)
			&&isprime(n+8*d)
			&&isprime(n+9*d)){
				cout<<d;
			}
		}
	}
	return 0;
}
