#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
int a[1000000];
void load(char filename[]) //写文件
{
	int i;
	FILE *fp;
	fp=fopen(filename,"w");
	if(fp==NULL)
	{
		printf("cannot open file/n");
		return;
	}
	for(i=0;i<1000000;i++)
	fprintf(fp,"%d ",a[i]);
}
int cmp(const void *a, const void *b)
{
	return (*(int*)a)-(*(int*)b); //从小到大进行排序
}
void paixu()
{
	qsort(a,1000000,sizeof(int),cmp);
}
int main(void)
{
	int i;
	char filename[20];
	srand( (unsigned)time( NULL ) );         //初始化随机数
	for(i=0;i<1000000;i++)                //打印出10个随机数
		a[i]=rand();
	strcpy(filename,"无序.txt");
	load(filename);
	paixu();//快速排序
	strcpy(filename,"有序.txt");
	load(filename);
	system("pause");
	return 0;
}
