//����2-19 �������������������ֵ�ĵݹ��㷨��
void write(LinkNode *first)
{
	if(first==NULL)return;//�ݹ鵽�ף��ձ���
	cout<<first->data<<endl;//�����ǰ�ڵ��ֵ
	write(first->link);//����һ���Ϊ��ͷ�����ݹ����
};



