//程序2-40（按照升幂输出一个一元多项式）

void Output(Polynmial &PL)//输出带头结点的一元多项式链表X
{
	Term *p=PL->link;
	cout<<"The polynumial is: "<<endl;
	int h=1;//最初不输出"+"
	while(p!=NULL)
	{
		if(!h&&p->coef>0.0)cout<<"+";//非零项不是第一项输出+
		h=0;
		cout<<p->coef;//输出项的系数
		switch(p->coef)//输出项的指数
		{
			case 0:break;//常数项不输出指数
			case 1:cout<<"X";break;//一次项只输出X
			default:cout<<"X"<<p->exp;//高次项输出"X^指数"
		}
		p=p->link;//下一项
	}
	cout<<endl;
};
