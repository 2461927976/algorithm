#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s1;
	cin>>s1;
	unsigned int ans=0,weight=1;
	for(int i=s1.length()-1;i>=0;i--){
		if(s1[i]>='0'&&s1[i]<='9'){
			ans+=(s1[i]-'0')*weight;
		}
		else{
			ans+=(s1[i]-'A'+10)*weight;
		}
		weight*=16;
	}
	cout<<ans<<endl;
	return 0;
}
