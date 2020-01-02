/*
�������������ʾ��

�γ�Ҫ��������Ļ�������
1.���Ĵ���������
2.���нڵ������
3.���нڵ�������ɾ��
4.���нڵ�ı���

bool CreatTree(Tree *pTree,Node *pRoot);
void DestroyTree(Tree *pTree);
Node *SearchNode(Tree *pTree,int nodeIndex);
bool AddNode(Tree *pTree,int nodeIndex,int direction,Node *pNode);
bool DeleteNode(Tree *pTree,int nodeIndex,Node *pNode);
void Traverse(Tree *pTree);



*/

#include<iostream>
#include"Tree.h"
using namespace std;

int main(){
	int root=3;
	Tree *m_pTree=new Tree(10,&root);
	int node1=5;
	int node2=8;
	m_pTree->AddNode(0,0,&node1);
	m_pTree->AddNode(0,1,&node2);
	int node3=2;
	int node4=6;
	m_pTree->AddNode(1,0,&node3);
	m_pTree->AddNode(1,1,&node4);
	int node5=9;
	int node6=7;
	m_pTree->AddNode(2,0,&node5);
	m_pTree->AddNode(2,1,&node6);

	int node=0;
	m_pTree->DeleteNode(6,&node);
	cout<<"node="<<node<<endl;

	m_pTree->TreeTraverse();

	int *p=m_pTree->SearchNode(2);
	cout<<endl<<"node="<<*p<<endl;
	delete m_pTree;
	system("pause");
	return 0;
}