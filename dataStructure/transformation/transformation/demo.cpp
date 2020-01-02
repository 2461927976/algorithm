#include<iostream>
#include"MyStack.h"
#define BINARY          2
#define OCTONARY        8
#define HEXADECIMAL     16
using namespace std;

int main(void){
	char num[]="0123456789ABCDEF";
	MyStack<int> *pStack=new MyStack<int>(30);
	int N=2018;
	int mod=0;
	while(N != 0){
		mod=N % HEXADECIMAL;
		pStack->push(mod);
		N=N/HEXADECIMAL;
	}
	//pStack->stackTraverse(false);
	/*for (int i = pStack->stackLength()-1; i >=0; i--)
	{
		num[pStack[i]]
	}*/
	int elem=0;
	while (!pStack->stackEmpty())
	{
		pStack->pop(elem);
		cout<<num[elem];
	}
	delete pStack;
	pStack=NULL;
	system("pause");
	return 0;
}