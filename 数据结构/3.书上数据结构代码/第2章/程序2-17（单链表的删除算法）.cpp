//����2-17���������ɾ���㷨��

int Remove(LinkList &first,int i,DataType &x)//��������ĵ�i��Ԫ��ɾȥ��i��1��ʼ��
											 //		�����Ͳ���x���ر�ɾԪ�ص�ֵ
{
	LinkNode *q,*p;//p����ʾ��i-1������λ��,q����ʾҪɾ���Ľ��
	int k;
	if(i<=1){q=first,first=first->link;}//ɾ���׽��
	else//ɾ�������в���β�����
	{
		p=first;
		k=1;
		while(p!=NULL&&k<i-1)//�ҵ���i-1���ڵ��λ��
		{
			p=p->link;
			k++;
		}
		if(p==NULL||p->link==NULL)//�����̫�̻��Ϊ�� �򷵻�0
		{cerr<<"��Ч��ɾ��λ��!\n";return 0;}
		q=p->link;//�����i�����
		p->link=q->link;//����i-1�����͵�i+1���������
	}
	x=q->data;//ȡ����ɾ��������ֵ
	delete q;//ɾ�����
	return 1
}
