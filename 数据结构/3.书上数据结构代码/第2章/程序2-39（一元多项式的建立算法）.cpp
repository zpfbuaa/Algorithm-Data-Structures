//����2-39��һԪ����ʽ�Ľ����㷨��

void Input(Polynomial &PL)//�Ӽ�������һԪ����ʽ�ĸ������һ��һԪ����ʽ��
						  //Ҫ����ô˺���֮ǰPL�Ѵ������ÿ�
{
	Term *nTerm,*p,*pre;int c,e;
	while(1)//��Ҫ����û�н�����������н����Ŀ������
	{
		cout<<"Input a term(coef,exp):\n";
		cin>>c>>e;
		if(e<0)break;//��e<0�����������
		nTerm=new Term;//�����µĽ��
		if(!Term){cerr<<"�洢����ʧ��\n";exit(1);}
		nTerm->coef=c;
		nTerm->exp=e;
		p=PL->link;pre=PL;//Ѱ���������λ��
		while(p!=NULL&&p->exp<nTerm->exp)
		{
			pre=p;
			p=p->link;
		}
		if(p!=NULL&&p->exp==nTerm->exp)//�滻ָ����ȵ����ϵ��
			p->coef=nTerm->coef;
		else
		{
			nTerm->link=p; pre->link=nTerm;//���Ӳ�����ָ������
			
		}
	}
};






