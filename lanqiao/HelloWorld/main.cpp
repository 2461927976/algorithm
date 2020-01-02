#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	char ch;
	while(scanf("%d",&a)!=EOF){
		ch=a;
		printf("%c",ch);
	}
	return 0;
}
