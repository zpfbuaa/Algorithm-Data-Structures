
#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 110 //二叉排序数中的元素最大数目
typedef int ElemType;
//定义二叉排序数的结点结构
typedef struct Node
{
 ElemType data;
 Node *lchild;
 Node *rchild;
 Node(ElemType elem)//结点带参构造函数
 {
  data=elem;
  lchild=NULL;
  rchild=NULL;
 }
}Node,*BST;

void CreateBST(BST &bst,ElemType elem);//动态创建二叉排序数
void PreOrder(const BST &bst);//前序遍历二叉树
void MidOrder(const BST &bst);//中序遍历二叉树
void PostOrder(const BST &bst);//后序遍历二叉树
void Recycling(BST &bst);//回收二叉树的内存空间

int main()
{
 int n;
 while(~scanf("%d",&n))
 {

 BST bst=NULL;//二叉排序树跟结点初始化为NULL
 ElemType elem;
 for(int i=0;i<n;++i)
 {
  cin>>elem;
  CreateBST(bst,elem);
 }
 //先序遍历二叉排序树
// cout<<"\nPreOrder Binary_Sort_Tree:"<<endl;
 PreOrder(bst);
 cout<<endl;
 //中序遍历二叉排序树
// cout<<"\nMidOrder Binary_Sort_Tree:"<<endl;
 MidOrder(bst);
 cout<<endl;
 //后序遍历二叉排序树
// cout<<"\nPostOrder Binary_Sort_Tree:"<<endl;
 PostOrder(bst);
 cout<<endl;
}
}
void CreateBST(BST &bst,ElemType elem)
{
 if(bst)
 {
  if(elem<bst->data)//向左子树扫瞄
  {
   if(bst->lchild) CreateBST(bst->lchild,elem);//左子树不为空
   else bst->lchild=new Node(elem);
  }
  else if(elem>=bst->data)//向右子树扫描
  {
   if(bst->rchild) CreateBST(bst->rchild,elem);//右子树不为空
   else bst->rchild=new Node(elem);
  }
 }
 //二叉排序树的根节点为NULL
 else bst=new Node(elem);//构造新结点
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
 //采取中序方式回收内存空间
 if(bst)
 {
  Recycling(bst->lchild);
  Recycling(bst->rchild);
  delete bst;//释放根节点的内存空间
 }
}
