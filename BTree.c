#include "BTree.h"

#include <stdio.h>
#include <stdlib.h>

//˼�����þ�̬������ʹ�ô��ķ���
BTNode* BinaryTreeCreate(BTDataType* src)//�������Ĵ���
{
	static int s_n = 0;//��̬�������ֲ��ɼ���ȫ�ֱ���
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;
	}
	BTNode *cur = (BTNode *)malloc(sizeof(BTNode));
	cur->_data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}
void BinaryTreePrevOrder(BTNode* root)//��������ǰ�����
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreeInOrder(BTNode* root)//���������������
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		putchar(root->_data);
		BinaryTreePrevOrder(root->rchild);
	}
}
void BinaryTreePostOrder(BTNode* root)//�������ĺ������
{
	if (root)
	{
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
		putchar(root->_data);
	}
}
void BinaryTreeDestory(BTNode* root)//������������(����)
{
	if (root)
	{
		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

void BinaryTreeLevelOrder(BTNode* root)//�������
{
	//��������(����)ʵ��
	//�Ƚ�root�ŵ������У�Ȼ����ʾ����
	//Ȼ���������Һ��Ӷ��ŵ�������
	//Ȼ��root����
	//whileѭ���������������ǣ�����Ϊ��
}
void BinaryTreePrevOrderNonR(BTNode* root)//ǰ��ǵݹ����
{
	//����ջ(˳���)ʵ��
	//�ȴ�ӡroot
	//������Һ��ӣ���ջ
	//��������ӣ����벢��ӡ����
	//���û�����ӣ�ȡջ��
	//while�������������ǣ�ȡջ����curΪ��
}
void BinaryTreeInOrderNonR(BTNode* root)//����ǵݹ����
{
	//����ջʵ��
	//���Ӻͱ�����ջ�����û�����Ӿͳ�ջ��ӡ
	//���û���Һ��Ӿ�ȡջ�����Һ���
	//while�����������ǣ��Һ���Ϊ����ջΪ�� 
}
void BinaryTreePostOrderNonR(BTNode* root)//����ǵݹ����
{
	/*
	char tag[64];
	BTNode * cur=root;
	Stack st;
	putchar (cur->_data);
	do{
		for (;cur;cur=cur->lchild)��ջ����ÿ��������Ԫ����0
		{
			StackPush(&st,cur);
			tag[st.sizr-1]=0;
		}
		while(!StackIsEmpty(&st) && tag[st.size-1])ѭ����ӡ��ջ
		{
			cur=StackTop(&st);
			putchar(cur->_data);
			StackPop(&st);         �������size--
		}
		if(!StackIsEmpty(&st))
		{
			cur=StackTop(&st);
			tag[st.sizr-1]=1;��1
			cur=cur->rchild;
		}
	}while(!StackIsEmpty(&st));
	*/
}