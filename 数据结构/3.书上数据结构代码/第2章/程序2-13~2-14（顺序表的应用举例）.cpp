//顺序表的应用举例

//程序2-13（集合的并运算的实现）
void Merge(SeqList &LA,SeqList &LB)//合并LA和LB，结果存储在LA之中
{
	int n=Length(LA),int m=Length(LB),i,k,x;
	for(i=0;i<m;i++)
	{
		x=LB.data[i];//依次取出LB的元素
		k=Search(LA,x);//利用Search(SeqList &L,DataType &x)函数在LA里面查找ｘ
    }
    if(K==0)//如果没有找到就将它插入LA中
    {
    	Insert(LA,n+1,x);//利用Insert(SeqList &L,int i,DataType &x)函数，将LB中的元素插入到LA中
    	n++;//没什么大用，再次调用Length(LA)时可以得到长度自增了
	}
};

//程序2-14（集合的交运算的实现）
void Intersection(SeqList &LA,SeqList&LB)//求顺序表LA和LB中的共有元素，结果存储在LA中
{
	int n=Length(LA),m=Length(LB),i=1,k,x;
	while(i<=n)
	{
		x=LA.data[i-1];//依次拿出LA中的元素
		k=Search(LB,x);//将该元素在LB中查找
		if(k==0)//如果没有找到就将这个元素在LA中删除（其中这个元素位于LA的第i个位置）
		{
			Remove(LB,i,x);//利用删除函数，将这个元素在LA中删除
			n--;//长度减一
		}
		else i++;//如果找到，那么拿出LA的下一个元素，也就是i++
	}
};

/*
	(1)在使用顺序表的应用程序中需要加上语句#include<SeqList.h>
	(2)其次，事先把顺序表的结构定义和主要操作的实现代码
	   都放到SeqList.h文件中，以供应用程序使用
*/






