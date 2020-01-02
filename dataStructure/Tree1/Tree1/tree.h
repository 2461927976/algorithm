/*
二叉树：链表实现
《数据结构探险-线性表篇》

Tree();
~Tree();
Node *SearchNode(int nodeIndex);
bool AddNode(int nodeIndex,int direction,Node *pNode);
bool DeleteNode(int nodeIndex,Node *pNode);
void PreorderTraversal();    //前序遍历  0 1 3 4 2 5 6  根左右
void InorderTraversal();     //中序遍历  3 1 4 0 5 2 6  左根右
void PostorderTraversal);    //后序遍历  3 4 1 5 6 2 0  左右根

结点要素：索引 数据 左孩子指针 右孩子指针

         (0)
     5(1)    8(2)
 2(3) 6(4) 9(5)  7(6)
*/


#include "node.h"
#include<stdio.h>

class Tree{
public:
	Tree();                                                           //创建树
	~Tree();                                                          //销毁树
	Node *SearchNode(int nodeIndex);                                  //搜索结点
	bool AddNode(int nodeIndex,int direction,Node *pNode);            //添加结点
	bool DeleteNode(int nodeIndex,Node *pNode);                       //删除结点
	void PreorderTraversal();                                         //前序遍历
	void InorserTraversal();                                          //中序遍历
	void PostorderTraversal();                                        //后序遍历

private:
	Node *m_pRoot;
};

