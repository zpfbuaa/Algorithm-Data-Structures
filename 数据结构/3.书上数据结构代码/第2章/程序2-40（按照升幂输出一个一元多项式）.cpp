//����2-40�������������һ��һԪ����ʽ��

void Output(Polynmial &PL)//�����ͷ����һԪ����ʽ����X
{
	Term *p=PL->link;
	cout<<"The polynumial is: "<<endl;
	int h=1;//��������"+"
	while(p!=NULL)
	{
		if(!h&&p->coef>0.0)cout<<"+";//������ǵ�һ�����+
		h=0;
		cout<<p->coef;//������ϵ��
		switch(p->coef)//������ָ��
		{
			case 0:break;//��������ָ��
			case 1:cout<<"X";break;//һ����ֻ���X
			default:cout<<"X"<<p->exp;//�ߴ������"X^ָ��"
		}
		p=p->link;//��һ��
	}
	cout<<endl;
};
