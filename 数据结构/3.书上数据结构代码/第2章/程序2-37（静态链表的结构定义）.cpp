//����2-37����̬����Ľṹ���壩

#define defaultSize 128//Ĭ�������С
typedef int DataType;
typedef struct node//��̬�����㶨��
{
	DataType data;//�������
	int link;//��̽��ָ��
}SLinkNode;
typedef struct staticList//��̬����ṹ����
{
	SLinkNode *elem;//�������
	int maxsize;//�����������
	int n;//����ǰ����
}
//��ʼ����̬����
/*  SL.maxsize=defaultSize;
	SL.elem=new SLinkNode[SL.maxsize+1];
	if(!SL.elem){cerr<<"�洢����ʧ��\n";exit(1);}
	for(int i=1;i<=SL.maxsize;i++)
	SL.elem[i]=-1;
	SL.elem[0]=0;
	
	
	
	
	
