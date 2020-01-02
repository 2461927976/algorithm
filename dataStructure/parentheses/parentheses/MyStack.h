#ifndef MyStack_h
#define MyStack_h

template<typename T>

class MyStack{
public:
	MyStack(int size);
	~MyStack();
	bool stackEmpty();
	bool stackFull();
	void clearStack();
	int stackLength();
	bool push(T elem);
	bool pop(T &elem);
	void MyStack::stackTraverse(bool isFromButtom);
private:
	T *m_pBuffer;
	int m_iSize;
	int m_iTop;
};


#include "MyStack.h"
#include<iostream>
using namespace std;

template<typename T>
MyStack<T>::MyStack(int size){
	m_iSize=size;
	m_pBuffer=new T[size];
	m_iTop=0;
}
template<typename T>
MyStack<T>::~MyStack(){
	delete []m_pBuffer;
}
template<typename T>
bool MyStack<T>::stackEmpty(){
	if (m_iTop==0)
	{
		return true;
	}
	return false;
}
template<typename T>
bool MyStack<T>::stackFull(){
	if (m_iTop==m_iSize)
	{
		return true;
	}
	return false;
}
template<typename T>
void MyStack<T>::clearStack(){
	m_iTop=0;
}
template<typename T>
int MyStack<T>::stackLength(){
	return m_iTop;
}
template<typename T>
bool MyStack<T>::push(T elem){
	if (stackFull())
	{
		return false;
	}
	m_pBuffer[m_iTop]=elem;
	m_iTop++;
	return true;
}
/*char MyStack::pop(char &elem){
	if (stackEmpty())
	{
		throw 1;
	}
	else{
		m_iTop--;
		return m_pBuffer[m_iTop];
	}
}*/
template<typename T>
bool MyStack<T>::pop(T &elem){
	if (stackEmpty())
	{
		return false;
	}
	m_iTop--;
	elem=m_pBuffer[m_iTop];
	return true;
}
template<typename T>
void MyStack<T>::stackTraverse(bool isFromButtom){
	if (isFromButtom)
	{
		for (int i = 0; i < m_iTop; i++){
			cout<<m_pBuffer[i];
			//m_pBuffer[i].printCoordinate();
		}
	}
	else
	{
		for (int i = m_iTop; i >= 0; i--)
		{
			cout<<m_pBuffer[i];
			//m_pBuffer[i].printCoordinate();
		}
	}
}

#endif