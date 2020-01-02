#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s1,s2;
	int n;
	int i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s1;
		s2="";
		for(j=0;j<s1.length();j++){
			switch(s1[j]){
				case '0':s2=s2+"0000";
				break;
				case '1':s2=s2+"0001";
				break;
				case '2':s2=s2+"0010";
				break;
				case '3':s2=s2+"0011";
				break;
				case '4':s2=s2+"0100";
				break;
				case '5':s2=s2+"0101";
				break;
				case '6':s2=s2+"0110";
				break;
				case '7':s2=s2+"0111";
				break;
				case '8':s2=s2+"1000";
				break;
				case '9':s2=s2+"1001";
				break;
				case 'A':s2=s2+"1010";
				break;
				case 'B':s2=s2+"1011";
				break;
				case 'C':s2=s2+"1100";
				break;
				case 'D':s2=s2+"1101";
				break;
				case 'E':s2=s2+"1110";
				break;
				case 'F':s2=s2+"1111";
				break;
				defalt:break;
			}
		}
		if(s2.length()%3==1){
			s2="00"+s2;
		}
		if(s2.length()%3==2){
			s2="0"+s2;
		}
		int flag=0;
		for(k=0;k<s2.length()-2;k=k+3){
			//int p=4*s2[k]+2*s2[k+1]+s2[k+2]; s2[k]表示这个数的ASKII码 
			int p=4*(s2[k]-'0')+2*(s2[k+1]-'0')+s2[k+2]-'0';//数组减去一个字符表示ASCII码之差 
			if(p){
				flag=1;
			}
			if(flag){
				cout<<p;
			}
		}
		cout<<endl; 
	}
	return 0;
}
