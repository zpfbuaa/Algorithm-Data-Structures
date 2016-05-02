//程序1-16 迭代计算a的平方根
float sqrtCale(float a)
{
	float precision=0.0001;
	float x,x0;
	x=1;
	do
	{
		x0=x;
		x=1+(a-1)/(1+x);
	}while(x-x0>precision||x0-x>precision);
	return x;
}
