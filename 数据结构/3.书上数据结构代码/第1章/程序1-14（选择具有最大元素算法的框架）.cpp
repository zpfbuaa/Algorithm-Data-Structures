//����1-14 ѡ��������Ԫ���㷨�Ŀ��
int getMax(int a[],int n)
{
	int i,k=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[k])
		k=i;
	}
	return k;
}
