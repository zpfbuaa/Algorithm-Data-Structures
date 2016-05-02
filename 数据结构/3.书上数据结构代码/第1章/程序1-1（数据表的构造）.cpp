//程序1-1 数据表（DataList）的构造数据类型
#define maxsize 100			//表空间的大小，可根据实际情况决定
typedef int ElemType;       //表中元素的数据类型，假定为int
typedef struct{
	ElemType elem[maxsize]; //存放表元素的向量
	int n;                  //当前的表长度
}DataList;

