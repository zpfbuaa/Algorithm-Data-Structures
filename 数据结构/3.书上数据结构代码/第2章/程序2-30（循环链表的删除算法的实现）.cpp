//����2-30��ѭ�������ɾ���㷨��ʵ�֣�
int Remove(CircList &first,int i,DataType &x)//�������еĵ�i��Ԫ��ɾȥ��ͨ�������Ͳ���x���ظ�Ԫ�ص�ֵ
                                             //���i��������ɾ��ʧ�ܣ���������0��ɾ���ɹ���������1
{
    if(i<1)return 0;//i̫С��������������0
    CircNode *p=first,*q;
	int k=0;
    while(p->link!=first&&k<i-1)//��pָ��ѭ������ĵ�i-1�����
    {
		p=p->link;
		k++;
	}
	if(p->link==L)return 0;//���i̫�󣬱�ɾ��㲻���� ��������0
	q=p->link;//��q�����汻ɾ���
	p->link=q->link;//����i-1�����͵�i+1�������
	x=q->data;//ȡ����ɾ����Ԫ�ص�ֵ
	delete q;//ɾ��������
	return 1;//ɾ���ɹ���������1
}


