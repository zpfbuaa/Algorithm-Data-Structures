//程序2-2（顺序表的动态存储表示）
#define initSize 100//初始化的数组大小
typedef int DataType;
typedef struct{
	DataType *data;//表示指向数组的指针
	int maxSize,n;
}SeqList;

/*  顺序表动态存储表示的特点：
   （1）顺序表的动态存储是利用语句malloc或new动态分布，
        一旦数据空间占满，就可以在申请更大的存储空间，用以代替原来的存储空间 */
/* （2）表示数组大小的maxSize放在顺序表的结构里面定义，可以动态的记录下
        扩充后数组的大小空间，进一步提高了灵活性 */
	    
//程序2-3（顺序表的动态存储表示的初始化）
void initList(SeqList &L)
{
	L.data=new DataType[initSize];//创建顺序表存储数组
	if(!L.data){cerr<<"存储分配错误!\n";exit(1);}//链接stdlib.h和iostream.h
	L.maxSize=initSize;//表的最大为initSize
	L.n=0;//将表的实际长度置为0
};

//程序2-4 （清空顺序表）
void clearList(SeqList &L)
{
	L.n=0;//顺序表当前长度置为0
};

//程序2-5 （计算顺序表长度）
void Length(SeqList &L)
{
	return L.n;//返回当前长度即可
};

//程序2-6（判断表空）
void isEmpty(SeqList &L)
{
	return(L.n==0)?1:0;//空则返回1，不空返回0
};

//程序2-7（判断表满）
void isFull(SeqList &L)
{
	return(L.n==L.maxsize)?1:0;//满则返回1，不满则返回0
};

//程序2-8（顺序表查找算法）
int Search(SeqList &L,DataType x)
{
	for(int i=1;i<=L.n;i++)
		if(L.data[i]==x)return i;//查找成功则返回改元素第一次出现的位置
	return 0;//没有找到则返回0
};

//程序2-9（顺序表定位算法）
int Locate(SeqList &L,int i)
{
	if(i>=1&&i<=L.n)return i;//函数返回第i(1<=i<=n)个元素的位置
	else return 0;//返回0表示定位失败
};

//程序2-10（顺序表复制算法）
void Copy(SeqList &L1,SeqList &L2)//复制表L2的全部内容到表L1
{
	L1.maxSize=L2.maxSize;
	L1.n=L2.n;
	if(!L1.data)
	{
		L1.data=new DataType [L1.maxSize];//给L1分配存储空间
		if(!L1.data){cerr<<"存储分配错误!\n";exit(1);}
	}
	for(int i=1;i<=L2.n;i++)//将L2的数据拷贝到L1中
	L1.data[i-1]=L2.data[i-1];
};
	
//程序2-11（顺序表插入算法）
int Insert(SeqList &L,int i,DataType& x)//将新的元素x插入到表的第（i）个位置
{
	if(L.n==L.maxSize)return 0;//表满不可以插入
	if(i<0||i>L.n+1)return 0;//参数i不合理不可以插入（1 <= i <= n+1）
	
	for(int j=L.n;j>=i;j--)//依次向后移动，空出第i号位置
	{
		L.data[j]=L.data[j-1];//表中数据是从L.data[0]~~~L.data[l.n-1]!!!!
	}
	L.data[i]=x;//插入
	L.n++;//表长加一
	return 1;//插入成功
};

//程序2-12（顺序表删除算法）
int Remove(SeqList &L,int i,DataType &x)//将表中第i个位置上的元素删去,通过引用型参数x返回删除元素的值
{
	if(!L.n)return 0;//表空，不能插入
	if(i<1||i>L.n)return 0;//参数i不合理，不能删除
	x=L.data[i-1];//存储被删元素
	for(int j=i;j<L.n;j++)//依次前移（实际上是删除了L.data[i-1]）
	L.data[j-1]=L.data[j];
	L.n--;//表长减一
	return 1;
};

/*  顺序表主要操作的性能分析（对于查找，插入，删除函数的时间代价分析）
 	(1)顺序表主要用于不经常插入或删除的应用程序
    (2)ACN（Aerage Comparing Number）平均比较次数
        当表长为n时，ACN=(n+1)/2;  //Search(SeqList &L)函数
	(3)AMN（Average Moving Number）平均移动次数
	    当表长为n时，对于插入函数Insert(SeqList &L,int i,DataType &x)
		AMN=n/2
	(4)对于删除函数Remove(SeqList &L,int i,DataType &x)
        当表长为n时，
        AMN=(n-1)/2
*/


