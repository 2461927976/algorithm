#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool isprime(long long n){
	if(n<2||n%2==0){
		return false;
	}
	for(int i=3;i*i<=n;i+=2){   //Ϊʲô���ﲻ��i++��������i=i+2������Ϊi++����Ϊż����i%2���ģ������i%4/6/8�͸�������ģ�þ�������û��Ҫi++������ֱ��ģ�����͹��� 
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
