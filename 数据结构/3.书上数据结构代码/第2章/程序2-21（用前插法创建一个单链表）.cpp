//����2-21����ǰ�巨����һ��������
#include<cstdlib>
void insertFront(LinkList &first,DataType endTag)
//endTag��Լ�����������н�����־
{
	DataType val;
	cin>>val;
	if(val==endTag)return ;//��ֹ����
	LinkNode *s=new LinkNode;
	if(!s){cerr<<"�洢�������!\n";exit(1);}
	s->data=val;//s��㸳ֵ
	s->link=first->link;//����s������һ�����
	first->link=s;//��s��Ϊ�׽��
	insertFront(first,endTag);//�ݹ鴴��������
};

int main()
{
	LinkList L=new LinkNode;
	if(!L){cerr<<"�洢�������!\n";exit(1);}
	cin>>L->data;//����Լ������ֹ��־
	L->link=NULL;
	insertFront(L,L->data);//�ݹ鿩
};



