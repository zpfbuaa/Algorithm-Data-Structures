//����2-20 ����β�巨����һ��������
#include<cstdio>
#include<cstdlib>
void insertRear(LinkList &first,LinkNode *&last,DataType endTag)
//endTag��Լ�����������н�����־�������������ʱ��������endTag������0����
//�����������ʽ�ַ���endTag�������ַ����в�����ֵ��ַ����硰\0��
{
	DataType val;
	cin>>val;
	if(val==endTag)last->link==NULL;//������β��ֹͣ����
	else
	{
		last=new LinkNode;//�����½��
		if(!last){cerr<<"�洢�������!\n";exit(1);}
		last->data=val;//last��㸳ֵ
		insertRear(first,last->link,endTag);//�ݹ鿩
	}
};

int main()
{
	LinkList L=new LinkNode;
	if(!L){cerr<<"�洢�������!\n";exit(1);}
	cin>>L->data;//����Լ������ֹ��־
	LinkNode *rear=L;//βָ�룬��ʼʱָ��ͷ���
	insertRear(L,rear->link,L->data);//�ݹ鴴��������
};




