//����2-26������delMember�㷨��ʵ�֣�
//�������Ӧ�þ���
//��������e0<e1<e2<...<en��

int delMember(LinkSet &S,DataType x)
//�Ѽ����г�Աxɾȥ�������ϲ�����Ԫ��x�ڼ����У���������1�����򷵻�0
{
	SetNode *p=S.first->link, *pre=S.first;//preһֱ��p����ǰ��
	while(p!=NULL&&p->data<x)//ѭ��ɨ��
	{
		pre=p;
		p=p->link;
	}
	if(p!=NULL&&p->data==x)//���ҵ�������ɾȥ���p
	{
		pre->link=p->link;
		if(p==S.last) S.last==pre;//��p��β���ʱ��Ҫ�޸�S.last��ָ��
								  //ά��S.last����ȷ��
		delete p;
		return 1;
	}
	else
	return 0;
}





