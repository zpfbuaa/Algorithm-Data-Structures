//����2-27������Merge�㷨��ʵ�֣�

void Merge(LinkSet &LA,LinkSet &LB,LinkSet &LC)
//�󼯺�LA�ͼ���LB�Ĳ������ͨ��LC���أ�Ҫ��LC�Ѿ�������Ϊ��
{
	SetNode *pa=LA.first->link,*pb=LB.first->link;
	SetNode *p,*pc=LC.frist;
	while(pa!=NULL&&pb!=NULL)
	{
		if(pa->data<=pb->data)
		{
			pc->link=new SetNode;
			if(!pc->link){cerr<<"�洢�������!";exit(1);}
			pc->link->data=pa->data;
			pa=pa->link;
			if(pa->data==pb->data)
			pb=pb->link;
		}
		else
		{
			pc->link=new SetNode;
			if(!pc->link){cerr<<"�洢�������!";exit(1);}
			pc->link->data=pb->data;
			pb=pb->link;
		}
		pc=pc->link;
	}
	p=(pa!=NULL)?pa:pb;//����δ������ļ���
	while(p!=NULL)//�����������������
	{
		pc->link=new SetNode;
		if(!pc->link){cerr<<"�洢�������!";exit(1);}
		pc->link->data=p->data;
		pc=pc->link;p=p->link;
	}
	pc->link=NULL;
	LC.last=pc;
}
/*  (1)���ڲ���ҪƵ�������ɾ��������Ҫ����ִ�в��ҵ����Ա��ɲ���˳���洢
	(2)������ҪƵ�������ɾ���������Ҵ�����������Ա��ɲ��õ�����洢��
*/




