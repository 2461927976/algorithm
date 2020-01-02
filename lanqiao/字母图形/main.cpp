#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,n,pos=25;
	string str="ZYXWVUTSRQPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cout<<str.substr(pos--,m)<<endl;
	}
	return 0;
}
