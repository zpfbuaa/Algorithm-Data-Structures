//����2-18���������ֳ��ò�����ʵ�֣�
//��ͷ���ĵ�����
void initList(LinkList &first)//��ʼ��������
{
	first=new LinkNode;
	if(!first){cerr<<"�洢�������!\n";exit(1);}
	first->link=NULL;
};

void clearList(LinkList &first)//��յ�����
{
	LinkNode *q;//����ָ��
	while(first->link!=NULL)//��������ʱ��ɾ�����еĽ��
	{
		q=first->link;
		first->link=q->link;//���汻ɾ��㣬��������ժ�¸ý��
		delete q;//ɾ���ý��
	}
};

int Length(LinkList &first)//�����ĳ��ȣ���������һ��
{
	LinkNode *p=first->link;
	int count=0;
	while(p!=NULL)
	{
		p=p->link;
		count++;
	}
};

int isEmpty(LinkList &first)//�жϵ������Ƿ�Ϊ�գ�Ϊ���򷵻�1�������򷵻�0
{
	return (first->link==NULL);
}

LinkLode* Search(LinkList &first,DataType x)//�ڵ������в��ҵ�һ������x�Ľ�㣬���ҳɹ��򷵻ظý���λ�ã����򷵻�NULL
{
	LinkNode *p=first->link;
	while(p!=NULL&&p->data!=x)
	{
		p=p->link;
	}
	return p;
};

LinkNode *Locate(LinkList &first,int i)//�ڵ�����Ե�i����㶨λ���������ص�i������λ�ã����򷵻�NULL
{
	if(i<0)return NULL;
	LinkNode *p=first;
	int k=0;
	while(P!=NULL&&k<i)
	{
		p=p->link;
		k++;
	}
	return p;
};

int Insert(LinkList &first,int i,DataType x)//���µ�Ԫ��x���뵽���е�i��λ�ã����i��������������0�����򷵻�1
{
	LinkNode *p=Locate(first,i-1);//���ö�λ��������pָ��ָ������ĵ�i��λ��
	if(p==NULL)return 0;//���i����������0
	LinkNode *s=new LinkNode;
	if(!s){cerr<<"�洢�������!\n";exit(1);}
	s->data=x;
	s->link=p->link;//��s���ӵ�p֮��
	p->link=s;//����p����һ����㣬ָ��s
	return 1;//����ɹ�����������1
};

int Remove(LinkList &first,int i,DataType &x)
{
	LinkNode *p=Locate(first,i-1);//��pָ������ĵ�i-1��λ��
	if(P==NULL||p->link==NULL)return 0;//i��������������0
	LinkNode *q=p->link;//��q�����汻ɾ�Ľ��
	p->link=q->link;//�������� ����i-1�����͵�i+1���������
	x=q->data;//ȡ����ɾ��������
	delete q;//ɾ��������
	return 1;//ɾ���ɹ���������1
};

void Copy(LinkList &first1,LinkList &first2)
//�����ٶ�����first1�Ѵ�����Ϊ�գ���first1��ͷ����Ѵ�����first1->link==NULL;
//��������first2��ȫ����㵽������first1��
{
	LinkNode *srcptr=frist2->link;//srcptr��Դָ��
	LinkNode *destptr=first1;//destptr��Ŀ����βָ��
	while(srcptr->link!=NULL)//����whileѭ������first2�е�ÿ����㸴�Ƶ�first1��
	{
		destptr->link=new LinkNode;//�½�����ӵ�Ŀ����β
		if(!destptr){cerr<<"�洢�������!\n";exit(1);}
		destptr=destptr->link;
		destptr->data=srcptr->data;//�ڵ����ݵĴ���
		srcptr=srcptr->link;//����Դ��ָ�뵽��һ���
	}
	destptr->link=NULL;//Ŀ������β
};





