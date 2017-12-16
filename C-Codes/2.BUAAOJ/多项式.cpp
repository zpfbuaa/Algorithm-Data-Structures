#include<iostream>
#include<cstdlib>
#include<cmath> 
using namespace std; 
typedef struct term
{
	float coef;
	int exp;
	struct term *link;
}*poly;

void input(poly &pl)
{
	term *nterm, *p, *pre;
	int c,e;
	int counter=1;
	while(1)
	{
		cout<<"Input ("<<counter<<") term(coef,exp):\n";
		cin>>c>>e;
		counter++;
		if(e<0) break;
		nterm= new term;
		if(!nterm){cerr<<"´æ´¢·ÖÅäÊ§°Ü\n";exit(1);}
		nterm->coef=c;
		nterm->exp=e;
		p=pl->link;
		pre=pl;
		while(p!=NULL &&p->exp<nterm->exp )
		{
			pre=p;p=p->link;
		}
		if(p!=NULL &&p->exp==nterm->exp)
		{
			p->coef=nterm->coef;
		}
		else
		{
			nterm->link=p;
			pre->link=nterm;
		}
	}
} 

void output(poly &pl)
{
	term *p=pl->link;
	cout<<"The polynomial is:"<<endl;
	int h=1;
	while(p!=NULL)
	{
		if(!h&&p->coef>0.0)
		cout<<"+";
		h=0;
		cout<<p->coef;
		switch(p->exp)
		{
			case 0:break;
			case 1:cout<<"X";break;
			default :cout<<"X^"<<p->exp; 
		}
		p=p->link;
	}	
	cout<<endl;
}
void add(poly &a,poly &b,poly &c)
{
	term *pa,*pb,*pc,*p,*s;
	float temp;
	pc=c;
	pa=a->link;pb=b->link;
	while(pa!=NULL&&pb!=NULL)
	{
		s= new term;
		if(!s){cerr<<"´æ´¢·ÖÅäÊ§°Ü\n";exit(1);}
		if(pa->exp==pb->exp)
		{
			temp=pa->coef+pb->coef;
			if(fabs(temp)>0.001)
			{
				pc->link=s;pc=pc->link;
				pc->coef=temp;pc->exp=pa->exp;
			}
			else delete s;
			pa=pa->link;pb=pb->link;
		}
		else if(pa->exp<pb->exp)
		{
			pc->link=s;pc=pc->link;
			pc->coef=pa->coef;pc->exp=pa->exp;
			pa=pa->link;
		}
		else
		{
			pc->link=s;pc=pc->link;
			pc->coef=pb->coef;pc->exp=pb->exp;
			pb=pb->link;
		}
		p=(pa)?pa:pb;
		while(p!=NULL)
		{
			pc->link=new term;
			if(!pc->link){cerr<<"´æ´¢·ÖÅäÊ§°Ü\n";exit(1);}
			pc=pc->link;pc->coef=p->coef;pc->exp=p->exp;
			p=p->link;
		}
		pc->link=NULL;
		return ;
	}
}

void mult(poly &a,poly &b,poly &c)
{
	term *pa,*pb,*pc;int al,bl,i,k,maxexp;
	pc=c;
	for(pa=a;pa->link!=NULL;pa=pa->link);
	al=pa->exp;
	for(pb=b;pb->link!=NULL;pb=pb->link);
	bl=pb->exp;
	if(al!=-1||bl!=-1)
	{
		maxexp=al+bl;
		float *result =new float[maxexp+1];
		if(!result){cerr<<"´æ´¢·ÖÅäÊ§°Ü\n";exit(1);}
		for(i=0;i<maxexp;i++)result[i]=0.0;
		pa=a->link;
		while(pa!=NULL)
		{
			pb=b->link;
			while(pb!=NULL)
			{
				k=pa->exp+pb->exp;
				result[k]=result[k]+pa->coef*pb->coef;
				pb=pb->link;
			}
			pa=pa->link;
		}
		for(i=0;i<=maxexp;i++)
			if(fabs(result[i])>0.001)
			{
				pc->link=new term;
				if(!pc->link){cerr<<"´æ´¢·ÖÅäÊ§°Ü\n";exit(1);}
				pc=pc->link;pc->coef=result[i];pc->exp=i;
	    	}
		delete[]result;
	}
	pc->link=NULL;
}

int main()
{
	poly a,b;
	input(a);
	output(a);
//	add(a,b,c);
//	output(c);
}



