//����2-35��˫������Ĳ����㷨��

int Insert(DblList &first,int i,DataType x,int d)//����һ��������ֵx���½�㣬
												 //�����䰴d�ķ�����뵽��i�����λ��
{
	DblList *p=Locate(first,i-1,d);//��λ��i-1�����
	if(p==NULL)return 0;//i����������ʧ��
	DblList *s=new DblNode;//�����½��
	if(!s){cerr<<"�洢����ʧ��\n";exit(1);}
	s->data=x;
	if(d==0)//��ǰ���������
	{
		s->llink=p->llink;p->llink=s;
		s->llink->rlink=s;s->rlink=p;
	}
	else//�ں�̷������
	{
		s->rlink=p->rlink;p->rlink=s;
		s->rlink->llink=s;s->llink=p;
	}
	return 1;
}





