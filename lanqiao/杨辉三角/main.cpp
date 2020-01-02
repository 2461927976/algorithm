#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int triangle[34][34];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(0==j||i==j){
				triangle[i][j]=1;
			}
			else{
				triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<triangle[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
