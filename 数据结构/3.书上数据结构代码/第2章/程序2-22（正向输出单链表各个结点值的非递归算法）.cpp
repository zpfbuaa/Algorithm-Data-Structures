//����2-22���������������������ֵ�ķǵݹ��㷨��
void write(LinkNode *first)//�ǵݹ��㷨��������
{
	while(first->link!=NULL)//ѭ���������
	{
		cout<<first->link->data<<endl;//����ǿգ�����������
		first=first->link;//���������һ���
	}
};



