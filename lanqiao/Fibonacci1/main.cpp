#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n,i,F[1000000],res;

int main(int argc, char** argv) {
	cin>>n;
	F[0] = 1;
	F[1] = 1;
	if(n>=1&&n<=2){
		cout<<F[n-1];
	}
	else{
		for(i=2;i<n;i++){
			F[i] = F[i-1] + F[i-2];
		}
		res = F[n-1] % 10007;
		cout<<res;
	}
	return 0;
}
