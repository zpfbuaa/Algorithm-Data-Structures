#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
int a[1000000];
void load(char filename[]) //д�ļ�
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
	return (*(int*)a)-(*(int*)b); //��С�����������
}
void paixu()
{
	qsort(a,1000000,sizeof(int),cmp);
}
int main(void)
{
	int i;
	char filename[20];
	srand( (unsigned)time( NULL ) );         //��ʼ�������
	for(i=0;i<1000000;i++)                //��ӡ��10�������
		a[i]=rand();
	strcpy(filename,"����.txt");
	load(filename);
	paixu();//��������
	strcpy(filename,"����.txt");
	load(filename);
	system("pause");
	return 0;
}
