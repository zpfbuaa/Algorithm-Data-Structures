//����2-34��˫������ṹ���塢��ʼ�������ҺͶ�λ������ʵ�֣�

typedef int DataType;
typedef struct node//˫������Ķ���
{
	DataType data;//�������
	struct node *llink,*rlink;//ǰ���ͺ�̽��
}DblNode, *DblList;

void initDblList(DblList &first,DataType Val)//��ʼ��������
//����˫�������ͷ��㣬������һ���ض���ֵVal
{
	first=new DblNode;
	if(!first){cerr<<"�洢����ʧ��!\n";exit(1);	}
	first->data=Val;
	first->rlink=first->llink=first;
};

DblList *Search(DblList &first,DataType x,int d)
//���Ҳ������ڴ�ͷ����˫��������Ѱ����ֵ����x�Ľ�㣬���ҵ����������ظý���ַ
//����������NULL������d=0������ǰ��������ң�d!=0������̷������

{
	DblNode *p=(d==0)?first->llink:first->rlink;
	while(p!=first&&p->data!=x)
		p=(d==0)?p->lLink:p->lrink
	return (p!=first)?p : NULL;//���ز��ҵ�ַ������NULL��ʧ��
}














