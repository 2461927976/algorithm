/*
������������ʵ��
�����ݽṹ̽��-���Ա�ƪ��

Tree();
~Tree();
Node *SearchNode(int nodeIndex);
bool AddNode(int nodeIndex,int direction,Node *pNode);
bool DeleteNode(int nodeIndex,Node *pNode);
void PreorderTraversal();    //ǰ�����  0 1 3 4 2 5 6  ������
void InorderTraversal();     //�������  3 1 4 0 5 2 6  �����
void PostorderTraversal);    //�������  3 4 1 5 6 2 0  ���Ҹ�

���Ҫ�أ����� ���� ����ָ�� �Һ���ָ��

         (0)
     5(1)    8(2)
 2(3) 6(4) 9(5)  7(6)
*/


#include "node.h"
#include<stdio.h>

class Tree{
public:
	Tree();                                                           //������
	~Tree();                                                          //������
	Node *SearchNode(int nodeIndex);                                  //�������
	bool AddNode(int nodeIndex,int direction,Node *pNode);            //��ӽ��
	bool DeleteNode(int nodeIndex,Node *pNode);                       //ɾ�����
	void PreorderTraversal();                                         //ǰ�����
	void InorserTraversal();                                          //�������
	void PostorderTraversal();                                        //�������

private:
	Node *m_pRoot;
};

