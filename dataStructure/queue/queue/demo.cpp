#include<iostream>
#include"MyQueue.h"
using namespace std;

int main(void){
	MyQueue *p=new MyQueue(4);
	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(16);
	p->EnQueue(18);
	//p->EnQueue(20);
	p->QueueTraverse();

	int e=0;
	p->DeQueue(e);
	cout<<endl;
	cout<<e<<endl;

	p->DeQueue(e);
	cout<<endl;
	cout<<e<<endl;

	cout<<endl;
	p->QueueTraverse();

	p->ClearQueue();
	p->QueueTraverse();

	p->EnQueue(20);
	p->EnQueue(30);
	p->QueueTraverse();
	delete p;
	p=NULL;
	system("pause");
	return 0;
}