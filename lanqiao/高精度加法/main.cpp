#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void add(string a,string b){
	int c[100],tail=0,head=0,p=0;
	int i=a.length()-1;
	int j=b.length()-1;
	while(i>=0||j>=0){
		if(i>=0&&j>=0){
			p=(int)a[i]+(int)b[j]+p-'0'-'0';
		}
		else if(i<0&&j>=0){
			p=(int)b[j]+p-'0';
		}
		else if(i>=0&&j<0){
			p=(int)a[i]+p-'0';
		}
		c[tail++]=p%10;
		p=p/10;
		i--;j--;
	}
	if(p!=0){
		c[tail++]=p;
	}
	for(int i=tail-1;i>=head;i--){
		cout<<c[i];
	}
}
int main(int argc, char** argv) {
	string a,b;
	cin>>a>>b;
	add(a,b);
	return 0;
}
