//����2-16������������㷨��

int Insert(LinkList& first,int i,DataType x)//����Ԫ��x���뵽��i���ڵ��λ�á�
											//i��1��ʼ��i=1,��ʾ���뵽ԭ�׽��֮ǰ
{
	if(!first||i==1)//���뵽�ձ��ǿձ����Ԫ���
	{
		LinkNode *newnode=new LinkNode;//�����µĽ��
		if(!newnode){cerr<<"�洢�������!\n";exit(1);}
		newnode->data=x;
		newnode->link=first;first=newnode;//�½���Ϊ��һ�����
	}
	else//���뵽���л���β
	{
		LinkNode *p=first;//Ϊ���ҵ���i-1����㣬��Ҫ�½�һ��ָ�����ҵ���i-1�����
		int k=1;
		while(P!=NULL&&k<i-1)
		{
			p=p->link;
			k++;
		}//����ѭ����pָ���i-1������λ��
		if(p==NULL&&first)
		{cerr<<"��Ч�Ĳ���λ��!\n";return 0;}//�ж��Ƿ���������Ϊ�ջ��߱�̫���򷵻�0
		else//�������Ϳ�ʼ����
		{
			LinkNode *newnode=new LinkNode;//����һ���½��
			if(!newNode){cerr<<"�洢�������!\n";exit(1);}
			newnode->data=x;
			newnode->link=p->link;
			p->link=newnode;
		}
	}
	return 1;
};







