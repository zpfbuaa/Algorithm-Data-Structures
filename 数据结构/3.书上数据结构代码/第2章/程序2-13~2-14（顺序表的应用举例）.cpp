//˳����Ӧ�þ���

//����2-13�����ϵĲ������ʵ�֣�
void Merge(SeqList &LA,SeqList &LB)//�ϲ�LA��LB������洢��LA֮��
{
	int n=Length(LA),int m=Length(LB),i,k,x;
	for(i=0;i<m;i++)
	{
		x=LB.data[i];//����ȡ��LB��Ԫ��
		k=Search(LA,x);//����Search(SeqList &L,DataType &x)������LA������ң�
    }
    if(K==0)//���û���ҵ��ͽ�������LA��
    {
    	Insert(LA,n+1,x);//����Insert(SeqList &L,int i,DataType &x)��������LB�е�Ԫ�ز��뵽LA��
    	n++;//ûʲô���ã��ٴε���Length(LA)ʱ���Եõ�����������
	}
};

//����2-14�����ϵĽ������ʵ�֣�
void Intersection(SeqList &LA,SeqList&LB)//��˳���LA��LB�еĹ���Ԫ�أ�����洢��LA��
{
	int n=Length(LA),m=Length(LB),i=1,k,x;
	while(i<=n)
	{
		x=LA.data[i-1];//�����ó�LA�е�Ԫ��
		k=Search(LB,x);//����Ԫ����LB�в���
		if(k==0)//���û���ҵ��ͽ����Ԫ����LA��ɾ�����������Ԫ��λ��LA�ĵ�i��λ�ã�
		{
			Remove(LB,i,x);//����ɾ�������������Ԫ����LA��ɾ��
			n--;//���ȼ�һ
		}
		else i++;//����ҵ�����ô�ó�LA����һ��Ԫ�أ�Ҳ����i++
	}
};

/*
	(1)��ʹ��˳����Ӧ�ó�������Ҫ�������#include<SeqList.h>
	(2)��Σ����Ȱ�˳���Ľṹ�������Ҫ������ʵ�ִ���
	   ���ŵ�SeqList.h�ļ��У��Թ�Ӧ�ó���ʹ��
*/






