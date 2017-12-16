#include <cstdio>
const int maxn = 10;

int n, arr[maxn];

void insert_sort(int p, int c) {		//��������
	for (int i = c; i > p; i--)
		arr[i] = arr[i - 1];
	arr[p] = c;
}

int dfs(int d) {
	int tmp[d + 1];						//�������鴢��ԭ������ֵ����Ȼ���ҵ�
	for (int j = 1; j <= n; j++)
		tmp[j] = arr[j];
	for (int i = d; i >= 1; i--) {			//ѭ�������źõĴ��������dfs
		printf("if %c < %c then\n", arr[i] + 'a' - 1, d + 'a');
		insert_sort(i + 1, d + 1);			//������ȥ����ĸ���뵽i+1��λ��
		if (d + 1 == n) {					//dfs����������
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
		for (int j = 1; j <= n; j++)		//��ԭ����
			arr[j] = tmp[j];
	}
	insert_sort(1, d + 1);					//�����Ƕ����һ�����������ĸ�嵽��������ǰ�棬������û��else��
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
		//ǰ�沿��
		printf("program sort(input,output);\nvar\n");
		printf("a");
		for (int i = 2; i <= n; i++)
			printf(",%c", i + 'a' - 1);
		printf(" : integer;\nbegin\nreadln(");
		printf("a");
		for (int i = 2; i <= n; i++)
			printf(",%c", i + 'a' - 1);
		printf(");\n");
		dfs(0);				//��ʼ����
		printf("end.\n");
		if (t != 0)
			printf("\n");
	}
	return 0;
}
