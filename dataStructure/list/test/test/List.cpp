#include<iostream>
#include"List.h"
using namespace std;


List::List(int size){
	m_iSize = size;
	m_pList=new int[m_iSize];
	m_iLength = 0;
}
List::~List(){
	delete[]m_pList;
	m_pList=NULL;
}
void List::ClearList(){
	m_iLength = 0;
}
bool List::ListEmpty(){
	if (m_iLength==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int List::ListLength(){
	return m_iLength;
}
bool List::GetElem(int i,int *e){
	if (i<0 || i>= m_iSize)
	{
		return false;
	}
	*e=m_pList[i];
	return true;
}
int List::LocateElem(int *e){
	for (int i = 0; i < m_iLength; i++)
	{
		if(m_pList[i]==*e){
			return i;
		}
	}
	return -1;
}
bool List::PriorElem(int *currentElem,int *preElem){
	int temp = LocateElem(currentElem);
	if(temp==-1){
		return false;
	}
	else
	{
		if(temp==0){
			return false;
		}
		else
		{
			*preElem=m_pList[temp-1];
			return true;
		}
	}
}
bool List::NextElem(int *currentElem,int *nextElem){
	int temp = LocateElem(currentElem);
	if (temp==-1)
	{
		return false;
	}
	else
	{
		if (temp==m_iLength-1)
		{
			return false;
		}
		else
		{
			*nextElem=m_pList[temp+1];
			return true;
		}
	}
}
void List::ListTraverse(){
	for (int i = 0; i < m_iLength; i++)
	{
		cout<<m_pList[i]<<endl;
	}
}
bool List::ListInsert(int i,int *e){
	if (i<0||i>m_iLength)
	{
		return false;
	}
	for (int k = m_iLength-1; k>=i; k--)
	{
		m_pList[k+1] = m_pList[k];
	}
	m_pList[i] = *e;
	m_iLength++;
	return true;
}
bool List::ListDelete(int i,int *e){
	if (i<0||i>=m_iLength)
	{
		return false;
	}
	e = m_pList;
	for (int k = i+1; k < m_iLength; k++)
	{
		m_pList[k-1]=m_pList[k];
	}
	m_iLength--;
	return true;
}
int main(){
	//3 5 7 2 9 1 8
	int e1=3;
	int e2=5;
	int e3=7;
	int e4=2;
	int e5=9;
	int e6=1;
	int e7=8;
	int temp=0;

	List *list1=new List(10);

	//cout<<"length:"<<list1->ListLength()<<endl;

	list1->ListInsert(0,&e1);
	//cout<<"length:"<<list1->ListLength()<<endl;
	list1->ListInsert(1,&e2);
	list1->ListInsert(2,&e3);
	list1->ListInsert(3,&e4);
	list1->ListInsert(4,&e5);
	list1->ListInsert(5,&e6);
	list1->ListInsert(6,&e7);


	/*list1->ListDelete(0,&temp);
	if (!list1->ListEmpty())
	{
		cout<<"not empty"<<endl;
	}
	list1->ClearList();
	if (list1->ListEmpty())
	{
		cout<<"empty"<<endl;
	}*/

	list1->ListTraverse();
	list1->PriorElem(&e4,&temp);
	cout<<"temp:"<<temp<<endl;
	list1->NextElem(&e4,&temp);
	cout<<"temp"<<temp<<endl;

	/*list1->GetElem(0,&temp);
	cout<<"temp:"<<temp<<endl;
	cout<<list1->LocateElem(&temp)<<endl;*/


	//cout<<"#"<<temp<<endl;
	delete list1;
	system("pause");
	return 0;
}