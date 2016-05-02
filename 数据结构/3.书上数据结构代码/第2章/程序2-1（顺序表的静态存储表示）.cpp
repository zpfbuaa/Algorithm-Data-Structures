//程序2-1（顺序表的静态存储表示）
#define MAX_SIZE 100
typedef int DataType;//这样在不同的场合只需要修改一处即可（增强灵活性）
typedef struct{
	DataType data[MAX_SIZE];//MAX_SIZE 是存储数组的最大容量
	int n;					//n 表示数组中当前已有的表元素数 1<=n<=MAX_SIZE
} SeqList;


/* （1）存储线性表的一维数组的大小MAX_SIZE和空间data在结构声明中明确指定 */
/* （2）在程序编译时数组空间由编译器固定分配，程序结束时此空间自动释放  */
/* （3）一旦数组空间占满，再加入新的数据就会产生溢出，
      此时存储空间不能扩充，就会导致程序停止工作 */

