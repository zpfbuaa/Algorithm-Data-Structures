//����2-24������Contains�㷨��ʵ�֣�
//�������Ӧ�þ���
//��������e0<e1<e2<...<en��

SetNode *Contains(LinkSet &S,DataType x)
{
	SetNode *p=S.first->link;
	while(p!=NULL&&p->data<x)
		p=p->link;
	if(p!=NULL&&p->data==x)return p;
	else return NULL;
};


