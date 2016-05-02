//程序2-38（多项式的结构定义）

typedef struct Term//多项式的结构定义
{
	float coef;//系数
	int exp;//指数
	struct Term *link;//链接指针
}*Polynomial;//一元多项式的定义
