//程序1-7 另一种交换两个整型变量的值
void Exchange3(int A[],int i,int j)
{
	A[i]=A[i]+A[j];
	A[j]=A[i]-A[j];
	A[i]=A[i]-A[j];
}
