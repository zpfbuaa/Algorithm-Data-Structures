//����2-25������addMember�㷨��ʵ�֣�
//�������Ӧ�þ���
//��������e0<e1<e2<...<en��

int addMember(LinkSet &S,DataType x)
//����Ԫ��x���뵽����֮�У������������д�Ԫ�أ���������0�����򷵻�1
{
	SetNode *p=S.first->link,*pre=S.first;//p��ɨ��ָ�룬preʱp��ǰ��
	while(p!=NULL&&p->link<x)//ѭ��ɨ��
	{
		pre=p;
		p=p->link;
	}
	if(p!=NULL&&p->data==x)return 0;//�����������д�Ԫ�أ������룬��������0
	SetNode *q=new SetNode;//����ֵΪx�Ľ��,��qָ��
	if(!q){cerr<<"�洢�������!\n";exit(1);}
	q->data=x; q->link=p; pre->link=q;//����
	if(!p)S.last=q;//������βʱ�޸�βָ��
	return 1;
};




