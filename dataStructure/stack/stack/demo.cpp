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
	//pStack->clearStack();Ϊʲô��ջ���ǻ���һ��o
	cout<<pStack->stackLength()<<endl;
	if (pStack->stackEmpty())
	{
		cout<<"ջΪ��"<<endl;
	}
	if (pStack->stackFull())
	{
		cout<<"ջΪ��"<<endl;
	}
	delete pStack;
	pStack=NULL;
	system("pause");
	return 0;
}