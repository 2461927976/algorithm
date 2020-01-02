#include <iostream>
#include<stack> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	char c[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cin>>a;
	stack<char> s;
	do{
		s.push(c[a%16]);
		a/=16;
	} while(a);
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}
