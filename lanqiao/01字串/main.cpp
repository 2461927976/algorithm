#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d,e;
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			for(c=0;c<2;c++){
				for(d=0;d<2;d++){
					for(e=0;e<2;e++){
						cout<<a<<b<<c<<d<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}
