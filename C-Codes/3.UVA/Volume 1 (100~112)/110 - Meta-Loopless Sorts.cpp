#include <cstdio>
const int maxn = 10;

int n, arr[maxn];

void insert_sort(int p, int c) {		//插入排序
	for (int i = c; i > p; i--)
		arr[i] = arr[i - 1];
	arr[p] = c;
}

int dfs(int d) {
	int tmp[d + 1];						//创建数组储存原来的数值，不然会乱掉
	for (int j = 1; j <= n; j++)
		tmp[j] = arr[j];
	for (int i = d; i >= 1; i--) {			//循环从现排好的串后序进行dfs
		printf("if %c < %c then\n", arr[i] + 'a' - 1, d + 'a');
		insert_sort(i + 1, d + 1);			//将接下去的字母插入到i+1的位置
		if (d + 1 == n) {					//dfs到最深处，输出
			printf("writeln(");
			printf("%c", arr[1] + 'a' - 1);
			for (int j = 2; j <= d + 1; j++)
				printf(",%c", arr[j] + 'a' - 1);
			printf(")\n");
			printf("else\n");
		}
		else {
			dfs(d + 1);
			printf("else\n");
		}
		for (int j = 1; j <= n; j++)		//还原数组
			arr[j] = tmp[j];
	}
	insert_sort(1, d + 1);					//下面是对最后一个情况，即字母插到整个数组前面，这里是没有else的
	if (d + 1 == n) {
		printf("writeln(");
		printf("%c", arr[1] + 'a' - 1);
		for (int j = 2; j <= d + 1; j++)
			printf(",%c", arr[j] + 'a' - 1);
		printf(")\n");
	}
	else
		dfs(d + 1);
	for (int i = 1; i <= n; i++)
		arr[i] = tmp[i];
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		//前面部分
		printf("program sort(input,output);\nvar\n");
		printf("a");
		for (int i = 2; i <= n; i++)
			printf(",%c", i + 'a' - 1);
		printf(" : integer;\nbegin\nreadln(");
		printf("a");
		for (int i = 2; i <= n; i++)
			printf(",%c", i + 'a' - 1);
		printf(");\n");
		dfs(0);				//开始深搜
		printf("end.\n");
		if (t != 0)
			printf("\n");
	}
	return 0;
}
