//����2-2��˳���Ķ�̬�洢��ʾ��
#define initSize 100//��ʼ���������С
typedef int DataType;
typedef struct{
	DataType *data;//��ʾָ�������ָ��
	int maxSize,n;
}SeqList;

/*  ˳���̬�洢��ʾ���ص㣺
   ��1��˳���Ķ�̬�洢���������malloc��new��̬�ֲ���
        һ�����ݿռ�ռ�����Ϳ������������Ĵ洢�ռ䣬���Դ���ԭ���Ĵ洢�ռ� */
/* ��2����ʾ�����С��maxSize����˳���Ľṹ���涨�壬���Զ�̬�ļ�¼��
        ���������Ĵ�С�ռ䣬��һ������������ */
	    
//����2-3��˳���Ķ�̬�洢��ʾ�ĳ�ʼ����
void initList(SeqList &L)
{
	L.data=new DataType[initSize];//����˳���洢����
	if(!L.data){cerr<<"�洢�������!\n";exit(1);}//����stdlib.h��iostream.h
	L.maxSize=initSize;//������ΪinitSize
	L.n=0;//�����ʵ�ʳ�����Ϊ0
};

//����2-4 �����˳���
void clearList(SeqList &L)
{
	L.n=0;//˳���ǰ������Ϊ0
};

//����2-5 ������˳����ȣ�
void Length(SeqList &L)
{
	return L.n;//���ص�ǰ���ȼ���
};

//����2-6���жϱ�գ�
void isEmpty(SeqList &L)
{
	return(L.n==0)?1:0;//���򷵻�1�����շ���0
};

//����2-7���жϱ�����
void isFull(SeqList &L)
{
	return(L.n==L.maxsize)?1:0;//���򷵻�1�������򷵻�0
};

//����2-8��˳�������㷨��
int Search(SeqList &L,DataType x)
{
	for(int i=1;i<=L.n;i++)
		if(L.data[i]==x)return i;//���ҳɹ��򷵻ظ�Ԫ�ص�һ�γ��ֵ�λ��
	return 0;//û���ҵ��򷵻�0
};

//����2-9��˳���λ�㷨��
int Locate(SeqList &L,int i)
{
	if(i>=1&&i<=L.n)return i;//�������ص�i(1<=i<=n)��Ԫ�ص�λ��
	else return 0;//����0��ʾ��λʧ��
};

//����2-10��˳������㷨��
void Copy(SeqList &L1,SeqList &L2)//���Ʊ�L2��ȫ�����ݵ���L1
{
	L1.maxSize=L2.maxSize;
	L1.n=L2.n;
	if(!L1.data)
	{
		L1.data=new DataType [L1.maxSize];//��L1����洢�ռ�
		if(!L1.data){cerr<<"�洢�������!\n";exit(1);}
	}
	for(int i=1;i<=L2.n;i++)//��L2�����ݿ�����L1��
	L1.data[i-1]=L2.data[i-1];
};
	
//����2-11��˳�������㷨��
int Insert(SeqList &L,int i,DataType& x)//���µ�Ԫ��x���뵽��ĵڣ�i����λ��
{
	if(L.n==L.maxSize)return 0;//���������Բ���
	if(i<0||i>L.n+1)return 0;//����i���������Բ��루1 <= i <= n+1��
	
	for(int j=L.n;j>=i;j--)//��������ƶ����ճ���i��λ��
	{
		L.data[j]=L.data[j-1];//���������Ǵ�L.data[0]~~~L.data[l.n-1]!!!!
	}
	L.data[i]=x;//����
	L.n++;//����һ
	return 1;//����ɹ�
};

//����2-12��˳���ɾ���㷨��
int Remove(SeqList &L,int i,DataType &x)//�����е�i��λ���ϵ�Ԫ��ɾȥ,ͨ�������Ͳ���x����ɾ��Ԫ�ص�ֵ
{
	if(!L.n)return 0;//��գ����ܲ���
	if(i<1||i>L.n)return 0;//����i����������ɾ��
	x=L.data[i-1];//�洢��ɾԪ��
	for(int j=i;j<L.n;j++)//����ǰ�ƣ�ʵ������ɾ����L.data[i-1]��
	L.data[j-1]=L.data[j];
	L.n--;//����һ
	return 1;
};

/*  ˳�����Ҫ���������ܷ��������ڲ��ң����룬ɾ��������ʱ����۷�����
 	(1)˳�����Ҫ���ڲ����������ɾ����Ӧ�ó���
    (2)ACN��Aerage Comparing Number��ƽ���Ƚϴ���
        ����Ϊnʱ��ACN=(n+1)/2;  //Search(SeqList &L)����
	(3)AMN��Average Moving Number��ƽ���ƶ�����
	    ����Ϊnʱ�����ڲ��뺯��Insert(SeqList &L,int i,DataType &x)
		AMN=n/2
	(4)����ɾ������Remove(SeqList &L,int i,DataType &x)
        ����Ϊnʱ��
        AMN=(n-1)/2
*/


