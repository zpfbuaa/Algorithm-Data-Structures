//程序2-39（一元多项式的建立算法）

void Input(Polynomial &PL)//从键盘输入一元多项式的各项，建立一个一元多项式。
						  //要求调用此函数之前PL已存在且置空
{
	Term *nTerm,*p,*pre;int c,e;
	while(1)//不要担心没有结束，下面会有结束的控制语句
	{
		cout<<"Input a term(coef,exp):\n";
		cin>>c>>e;
		if(e<0)break;//用e<0控制输入结束
		nTerm=new Term;//创建新的结点
		if(!Term){cerr<<"存储分配失败\n";exit(1);}
		nTerm->coef=c;
		nTerm->exp=e;
		p=PL->link;pre=PL;//寻找新项插入位置
		while(p!=NULL&&p->exp<nTerm->exp)
		{
			pre=p;
			p=p->link;
		}
		if(p!=NULL&&p->exp==nTerm->exp)//替换指数相等的项的系数
			p->coef=nTerm->coef;
		else
		{
			nTerm->link=p; pre->link=nTerm;//链接并保持指数升序
			
		}
	}
};






