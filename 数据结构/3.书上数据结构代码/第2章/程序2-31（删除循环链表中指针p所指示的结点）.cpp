//����2-31��ɾ��ѭ��������ָ��p��ָʾ�Ľ�㣩

int Remove(CircNode *&p,DataType &x)//�������е�ָ��p��ָʾ����Ԫ��ɾȥ��
									//ͨ�������Ͳ���x���ظ�Ԫ�ص�ֵ
{
	CircNode *q=p->link;//��һ��㱻ɾȥ
	x=p->data;p->data=q->data;//���ͱ�ɾ����ֵ
	p->link=q->link;//��������
	delete q;//ɾ�����
	return 1;//ɾ���ɹ���������1
}
