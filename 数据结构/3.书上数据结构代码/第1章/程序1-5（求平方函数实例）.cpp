#include<cstdio>

int squareByValue(int a){return a*=a;
}
void squareByference(int &a){a*=a;
}
int main()
{
	int x=2,z=4;
	printf("求平方前x=%d\n",x);
	printf("用squareByValue(x)\n");
	squareByValue(x);
	printf("求平方后x=%d\n",x);
	printf("求平方前z=%d\n",z);
	printf("用squareByreference(x)\n");
	squareByference(z);
	printf("求平方后z=%d\n",z);
}
