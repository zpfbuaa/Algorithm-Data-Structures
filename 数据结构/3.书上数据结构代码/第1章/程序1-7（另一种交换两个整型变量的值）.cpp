//����1-7 ��һ�ֽ����������ͱ�����ֵ
void Exchange3(int A[],int i,int j)
{
	A[i]=A[i]+A[j];
	A[j]=A[i]-A[j];
	A[i]=A[i]-A[j];
}
