#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int y;
	cin>>y;
	if(((y%4==0)&&(y%100!=0))||(y%400==0)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
