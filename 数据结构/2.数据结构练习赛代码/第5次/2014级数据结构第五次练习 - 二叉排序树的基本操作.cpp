
#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 110 //�����������е�Ԫ�������Ŀ
typedef int ElemType;
//��������������Ľ��ṹ
typedef struct Node
{
 ElemType data;
 Node *lchild;
 Node *rchild;
 Node(ElemType elem)//�����ι��캯��
 {
  data=elem;
  lchild=NULL;
  rchild=NULL;
 }
}Node,*BST;

void CreateBST(BST &bst,ElemType elem);//��̬��������������
void PreOrder(const BST &bst);//ǰ�����������
void MidOrder(const BST &bst);//�������������
void PostOrder(const BST &bst);//�������������
void Recycling(BST &bst);//���ն��������ڴ�ռ�

int main()
{
 int n;
 while(~scanf("%d",&n))
 {

 BST bst=NULL;//����������������ʼ��ΪNULL
 ElemType elem;
 for(int i=0;i<n;++i)
 {
  cin>>elem;
  CreateBST(bst,elem);
 }
 //�����������������
// cout<<"\nPreOrder Binary_Sort_Tree:"<<endl;
 PreOrder(bst);
 cout<<endl;
 //�����������������
// cout<<"\nMidOrder Binary_Sort_Tree:"<<endl;
 MidOrder(bst);
 cout<<endl;
 //�����������������
// cout<<"\nPostOrder Binary_Sort_Tree:"<<endl;
 PostOrder(bst);
 cout<<endl;
}
}
void CreateBST(BST &bst,ElemType elem)
{
 if(bst)
 {
  if(elem<bst->data)//��������ɨ��
  {
   if(bst->lchild) CreateBST(bst->lchild,elem);//��������Ϊ��
   else bst->lchild=new Node(elem);
  }
  else if(elem>=bst->data)//��������ɨ��
  {
   if(bst->rchild) CreateBST(bst->rchild,elem);//��������Ϊ��
   else bst->rchild=new Node(elem);
  }
 }
 //�����������ĸ��ڵ�ΪNULL
 else bst=new Node(elem);//�����½��
}

void PreOrder(const BST &bst)
{
 if(bst)
 {
  cout<<bst->data<<" ";
  PreOrder(bst->lchild);
  PreOrder(bst->rchild);
 }
}

void MidOrder(const BST &bst)
{
 if(bst)
 {
  MidOrder(bst->lchild);
  cout<<bst->data<<" ";
  MidOrder(bst->rchild);
 }
}

void PostOrder(const BST &bst)
{
 if(bst)
 {
  PostOrder(bst->lchild);
  PostOrder(bst->rchild);
  cout<<bst->data<<" ";
 }
}

void Recycling(BST &bst)
{
 //��ȡ����ʽ�����ڴ�ռ�
 if(bst)
 {
  Recycling(bst->lchild);
  Recycling(bst->rchild);
  delete bst;//�ͷŸ��ڵ���ڴ�ռ�
 }
}
