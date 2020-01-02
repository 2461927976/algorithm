#include<iostream>
#include"MyStack.h"
#include"Coordinate.h"
using namespace std;

int main(void){
	MyStack<char> *pStack=new MyStack<char>(5);
	pStack->push('h');
	pStack->push('l');

	pStack->stackTraverse(true);

	pStack->stackTraverse(false);
	//pStack->clearStack();为什么出栈后还是会有一个o
	cout<<pStack->stackLength()<<endl;
	if (pStack->stackEmpty())
	{
		cout<<"栈为空"<<endl;
	}
	if (pStack->stackFull())
	{
		cout<<"栈为满"<<endl;
	}
	delete pStack;
	pStack=NULL;
	system("pause");
	return 0;
}