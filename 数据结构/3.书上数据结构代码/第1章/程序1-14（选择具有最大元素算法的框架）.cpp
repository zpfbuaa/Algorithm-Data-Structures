//程序1-14 选择具有最大元素算法的框架
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
