#include<cstdio>

int squareByValue(int a){return a*=a;
}
void squareByference(int &a){a*=a;
}
int main()
{
	int x=2,z=4;
	printf("��ƽ��ǰx=%d\n",x);
	printf("��squareByValue(x)\n");
	squareByValue(x);
	printf("��ƽ����x=%d\n",x);
	printf("��ƽ��ǰz=%d\n",z);
	printf("��squareByreference(x)\n");
	squareByference(z);
	printf("��ƽ����z=%d\n",z);
}
