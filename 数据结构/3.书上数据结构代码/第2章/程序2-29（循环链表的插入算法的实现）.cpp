//����2-29��ѭ������Ĳ����㷨��ʵ�֣�

int Insert(CircNode *first,int i,DataType x)//����Ԫ��x������ѭ�������е�i��1<=i����λ�ã�
											//����ʧ����������0������ɹ���������1
{
	if(i<1)return 0;
	CircNode *p=first,*q;int k=0;
	while(p->link!=first&&k<i-1)//��λ�ڵ�i-1����㣬���i����������뵽��β
	{
		p=p->link;
		k++;
	}//pָ���i-1����㣬qʱ�´����Ľ�㣨Ҳ����Ҫ������Ľ�㣩
	q=new CircNode;//�����½��
	if(!q){cerr<<"�洢�������!\n";exit(1);}
	q->data=x;
	q->link=p->link;p->link=q;//����ɹ�
	return 1;
}







