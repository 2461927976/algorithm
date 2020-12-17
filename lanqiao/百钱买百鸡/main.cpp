#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=0,j=0,k=0;
	for(i=0;i<20;i++){
		for(j=0;j<34;j++){
			for(k=0;k<=300;k+=3){
				if((i+j+k==100)&&(5*i+3*j+(k/3)==100)){
					cout<<"������"<<i<<"��ĸ����"<<j<<"��С����"<<k<<endl;
				}
			} 
		}
	}
	return 0;
}
