#include "stdio.h"
#include "malloc.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
#define M 3
struct student
{
	char  num[10];                  /* ѧ����ѧ�� */
	char name[20];              /* ѧ�������� */
	char sex[5];                   /* ѧ�����Ա� */
	int age;			    	/* ѧ�������� */
	char birth[20];				/* ѧ���ĳ������� */
	long tele;					/* ѧ���ĵ绰���� */
	char addr[30];				/* ѧ���ĵ�ַ */
	char party[10];				/* ѧ���Ƿ�Ϊ��Ա */
	float score[M];				/* ѧ������ѧ�Ƴɼ� */
	float total;				/* ѧ����ѧ�Ƴɼ��ܷ� */
	struct student *next;

}stud[100];
struct secret
{
	char user[30];
	char code[30];

}use[100];
int len;      //ѧ������

/////////////////////////////////////////////////////////////////////////////////
/*ѧ����Ϣд�뵽�ļ���-----ϵͳ����*/
/////////////////////////////////////////////////////////////////////////////////
void writetxt(struct student *head)
{
	struct student *p;
	p=head;
	FILE *fp;
	fp=fopen("d://student.txt","wb");
	if(fp==NULL)
	{
		printf("cannot open");
		return ;
	}
	while(p!=NULL)
	{
		fwrite(p,sizeof(struct student),1,fp);
		p=p->next;
	}
	fclose(fp);

}

/////////////////////////////////////////////////////////////////////////////////
/*	     ѧ����Ϣ������ע��*/
/////////////////////////////////////////////////////////////////////////////////
struct student  *create( )
{
	char ch;
	char ok;
	int i;
	struct student  *p,*p1,*head,*p2;
	FILE *fp;
	fp=fopen("d://student.txt","rb");
	if(fp==NULL)
	{
		printf("\n           �ļ��������ڣ��Ƿ񴴽���(Y/N)\n");
		ch=getchar();
		len=1;
		scanf("%c",&ok);
		if(ok=='Y'||ok=='y')
		{
			p1=p2=(struct student *) malloc(sizeof(struct student));
			if((len)<10)
				printf("������0%d��ѧ��\n:",len);
			else
				printf("������%d��ѧ��:\n",len);
			scanf("%s",p1->num);
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%s",p1->name);
			if((len)<10)
				printf("������0%d���Ա�:\n",len);
			else
				printf("������%d���Ա�:\n",len);
			scanf("%s",p1->sex);
			ch=getchar();
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%d",&p1->age);
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%s",p1->birth);
			if((len)<10)
				printf("������0%d�ĵ绰:\n",len);
			else
				printf("������%d�ĵ绰��:\n",len);
			scanf("%ld",&p1->tele);
			if((len)<10)
				printf("������0%d�ĵ�ַ:\n",len);
			else
				printf("������%d�ĵ�ַ:\n",len);
			scanf("%s",p1->addr);
			if((len)<10)
				printf("������0%d�Ƿ�Ϊ��Ա:\n",len);
			else
				printf("������%d�Ƿ�Ϊ��Ա:\n",len);
			scanf("%s",p1->party);
			head=NULL;
			while(strcmp(p1->num,"0")!=0)
			{
				len++;
				if(head==NULL)
					head=p1=p2;
				else
					p2->next=p1;
				p2=p1;
				p1=(struct student *) malloc(sizeof(struct student));
				if((len)<10)
					printf("������0%d��ѧ��:\n",len);
				else
					printf("������%d��ѧ��:\n",len);
				scanf("%s",p1->num);
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%s",p1->name);
				if((len)<10)
					printf("������0%d���Ա�:\n",len);
				else
					printf("������%d���Ա�:\n",len);
				scanf("%s",p1->sex);
				ch=getchar();
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%d",&p1->age);
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%s",p1->birth);
				if((len)<10)
					printf("������0%d�ĵ绰:\n",len);
				else
					printf("������%d�ĵ绰��:\n",len);
				scanf("%ld",&p1->tele);
				if((len)<10)
					printf("������0%d�ĵ�ַ:\n",len);
				else
					printf("������%d�ĵ�ַ:\n",len);
				scanf("%s",p1->addr);
				if((len)<10)
					printf("������0%d�Ƿ�Ϊ��Ա:\n",len);
				else
					printf("������%d�Ƿ�Ϊ��Ա:\n",len);
				scanf("%s",p1->party);
			}
			p2->next=NULL;
			writetxt(head);
			return (head);
		}
	}
	if(ok=='N'||ok=='n')
	{
		printf("������ѡ��\n");
		return NULL;
	}
	else
	{
		printf("\n           �ļ��Ѿ�����\n");
		fp=fopen("d:\\student.txt","rb");
		p=stud;
		for(i=0;!feof(fp);i++)
			fread(stud+i,sizeof(struct student),1,fp);
		len=i-1;
		printf("             �ļ��ﺬ��%d��ѧ����Ϣ\n",len);
		printf("\n           �Ƿ�ʹ���Ѿ����ڵ�ѧ�����ݣ�(Y/N)\n");
		ch=getchar();
		scanf("%c",&ok);
		if(ok=='Y'||ok=='y')
		{
			head=p1=p2=NULL;
			fp=fopen("d:\\student.txt","rb");
			if(fp==NULL)
			{
				printf("open error\n");
				return  NULL;
			}
			else
			{
				printf("ѧ��       ����       �Ա�      ����      ��������     �绰����   ��ַ  �Ƿ�Ա\n");
				for(i=0;i<len;i++)
				{
					p1=(struct student *)malloc(sizeof(struct student));
					fread(p1,sizeof(struct student),1,fp);
					if(head==NULL)
						head=p2=p1;
					else
						p2->next=p1;
					p2=p1;
					printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
				}
				fclose(fp);
				return(head);
			}
		}
		if(ok=='N'||ok=='n')
		{
			len=1;
			p1=p2=( struct student *) malloc(sizeof(struct student ));
			if((len)<10)
				printf("������0%d��ѧ��:\n",len);
			else
				printf("������%d��ѧ��:\n",len);
			scanf("%s",p1->num);
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%s",p1->name);
			if((len)<10)
				printf("������0%d���Ա�:\n",len);
			else
				printf("������%d���Ա�:\n",len);
			scanf("%s",p1->sex);
			ch=getchar();
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%d",&p1->age);
			if((len)<10)
				printf("������0%d������:\n",len);
			else
				printf("������%d������:\n",len);
			scanf("%s",p1->birth);
			if((len)<10)
				printf("������0%d�ĵ绰:\n",len);
			else
				printf("������%d�ĵ绰��:\n",len);
			scanf("%ld",&p1->tele);
			if((len)<10)
				printf("������0%d�ĵ�ַ:\n",len);
			else
				printf("������%d�ĵ�ַ:\n",len);
			scanf("%s",p1->addr);
			if((len)<10)
				printf("������0%d�Ƿ�Ϊ��Ա:\n",len);
			else
				printf("������%d�Ƿ�Ϊ��Ա:\n",len);
			scanf("%s",p1->party);
			head=NULL;
			while(strcmp(p1->num,"0")!=0)
			{
				if(head==NULL)
					head=p1=p2;
				else
					p2->next=p1;
				p2=p1;
				p1=(struct student  *) malloc(sizeof(struct student));
				if((len)<10)
					printf("������0%d��ѧ��:\n",len);
				else
					printf("������%d��ѧ��:\n",len);
				scanf("%s",p1->num);
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%s",p1->name);
				if((len)<10)
					printf("������0%d���Ա�:\n",len);
				else
					printf("������%d���Ա�:\n",len);
				scanf("%s",p1->sex);
				ch=getchar();
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%d",&p1->age);
				if((len)<10)
					printf("������0%d������:\n",len);
				else
					printf("������%d������:\n",len);
				scanf("%s",p1->birth);
				if((len)<10)
					printf("������0%d�ĵ绰:",len);
				else
					printf("������%d�ĵ绰��:",len);
				scanf("%ld",&p1->tele);
				if((len)<10)
					printf("������0%d�ĵ�ַ:",len);
				else
					printf("������%d�ĵ�ַ:",len);
				scanf("%s",p1->addr);
				if((len)<10)
					printf("������0%d�Ƿ�Ϊ��Ա:",len);
				else
					printf("������%d�Ƿ�Ϊ��Ա:",len);
				scanf("%s",p1->party);
			}
			p2->next=NULL;
			writetxt(head);
		}
		return (head);
	}
}
////////////////////////////////////////////////////////////////////////////////
/*ѧ����Ϣ���޸�*/
////////////////////////////////////////////////////////////////////////////////
struct student *change(struct student *head)
{

	struct student *p=head;
	int age,choose,m;
	long tele;
	char num[10];
	char ch,yes,sex[5],birth[20],addr[30],party[10];
	char *p1;
	if(head==NULL)
	{
		printf("ԭ����Ϊ��");
		return NULL;
	}
	else
	{
		while(1)
		{
			printf("������ѧ��\n");
			scanf("%s",num);
			p=head;
			while(p!=NULL&&strcmp(p->num,num)!=0)
			{
				p=p->next;
				if(p==NULL)
				{
					printf("��ѧ��������\n");
					break;
				}
				if(strcmp(p->name,"0")==0)
				{
					printf("��ѧ���Ѳ�����\n");
					break;
				}
			}
			m=0;
			while(1)
			{
				if(p==NULL)
					break;
				if(strcmp(p->name,"0")==0)
					break;
				printf("��ѡ��1.�Ա� 2.���� 3.��������4.�绰 5.��ͥסַ6.��Ա\n");
				scanf("%d",&choose);
				if(choose==1)
				{
					printf("�������µ��Ա�\n");
					scanf("%s",&sex);
					p1=sex;
					strcpy(p->sex,p1);
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==2)
				{
					printf("�������µ����䣺\n");
					scanf("%d",&age);
					p->age=age;
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==3)
				{
					printf("�������µĳ������ڣ�\n");
					scanf("%s",birth);
					p1=birth;
					strcpy(p->birth,p1);
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==4)
				{
					printf("�������µĵ绰��\n");
					scanf("%d",&tele);
					p->tele=tele;
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==5)
				{
					printf("�������µļ�ͥסַ��\n");
					scanf("%s",addr);
					p1=addr;
					strcpy(p->addr,p1);
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==6)
				{
					printf("������'��'��'��'��\n");
					scanf("%s",party);
					p1=party;
					strcpy(p->party,p1);
					printf("�Ƿ�����޸ı�ѧ��ѧ��������ϢY/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
			}
			printf("�Ƿ�����޸�����ѧ��Y/N\n");
			ch=getchar();
			scanf("%c",&yes);
			if(yes=='N'||yes=='n')
				break;
		}
		writetxt(head);
		p=head;
		while(p!=NULL)
		{
			printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p->num,p->name,p->sex,p->age,p->birth,p->tele,p->addr,p->party);
			p=p->next;
		}
		return head;
	}
}
/////////////////////////////////////////////////////////////////////////////////
/*ѧ���ɼ���Ϣ��¼��*/
/////////////////////////////////////////////////////////////////////////////////
struct student *chengji(struct student *head)
{
	FILE *fp;
	struct student *p1,*p;
	int i;
	float sum=0;
	fp=fopen("d:\\student1.txt","wb");
	p1=(struct student *)malloc(sizeof(struct student));
	p1=head;
	while(p1!=NULL)
	{
		if(strcmp(p1->name,"0")==0)
		{
			printf("��ѧ��������\n");
			p1=p1->next;
			continue;
		}
		printf("������ѧ��Ϊ%sѧ���ĸ�����C���ԡ�Ӣ��ɼ�:\n",p1->num);
		for(i=0;i<M;i++)
		{
			scanf("%f",&p1->score[i]);
			sum+=p1->score[i];
		}
		p1->total=sum;
		sum=0;
		fwrite(p1,sizeof(struct student),1,fp);

		p1=p1->next;
	}
	fclose(fp);
	writetxt(head);
	p=head;
	printf("ѧ��       ����       �Ա�      ����      ��������     �绰����   ��ַ  �Ƿ�Ա\n");
	while(p!=NULL)
	{
		printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p->num,p->name,p->sex,p->age,p->birth,p->tele,p->addr,p->party);
		p=p->next;
	}
	return(head);
}
/////////////////////////////////////////////////////////////////////////////////
/*ѧ����Ϣ�����*/
/////////////////////////////////////////////////////////////////////////////////
struct student *insert(struct student *head)
{
	char ch,ok;
	struct student *p,*p0,*p1;
	p=p1=head;
	while(1)
	{
		if((len+1)<10)
			printf("����ѧ��Ϊ0%d\n",len+1);
		else
			printf("����ѧ��Ϊ%d\n",len+1);
		p0=(struct student *)malloc(sizeof(struct student));
		len++;
		if((len)<10)
			printf("������0%d��ѧ��:",len);
		else
			printf("������%d��ѧ��:",len);
		scanf("%s",p0->num);
		if((len)<10)
			printf("������0%d������:",len);
		else
			printf("������%d������:",len);
		scanf("%s",p0->name);
		if((len)<10)
			printf("������0%d���Ա�:",len);
		else
			printf("������%d���Ա�:",len);
		scanf("%s",p0->sex);
		ch=getchar();
		if((len)<10)
			printf("������0%d������:",len);
		else
			printf("������%d������:",len);
		scanf("%d",&p0->age);
		if((len)<10)
			printf("������0%d������:",len);
		else
			printf("������%d������:",len);
		scanf("%s",p0->birth);
		if((len)<10)
			printf("������0%d�ĵ绰:",len);
		else
			printf("������%d�ĵ绰��:",len);
		scanf("%ld",&p0->tele);
		if((len)<10)
			printf("������0%d�ĵ�ַ:",len);
		else
			printf("������%d�ĵ�ַ:",len);
		scanf("%s",p0->addr);
		if((len)<10)
			printf("������0%d�Ƿ�Ϊ��Ա:",len);
		else
			printf("������%d�Ƿ�Ϊ��Ա:",len);
		scanf("%s",p0->party);
		while(p->next!=NULL)
			p=p->next;
		p->next=p0;
		p0->next=NULL;
		printf("�Ƿ�������Y/N\n")	;
		ch=getchar();
		scanf("%c",&ok);
		if(ok=='y'||ok=='Y')len++;
		else
		{
			printf("����Ҫ���½���1�Ĳ�������ɸ�ѧ����Ϣ��ע��,лл!\n");
			break;
		}
	}
	p=head;
	while(p!=NULL)
	{
		printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p->num,p->name,p->sex,p->age,p->birth,p->tele,p->addr,p->party);
		p=p->next;
	}
	writetxt(head);
	return(head);

}
/////////////////////////////////////////////////////////////////////////////////
/*  �ָ���ɾ��ѧ����Ϣ*/
/////////////////////////////////////////////////////////////////////////////////
struct student *recover(struct student *head)
{
	FILE *fp;
	struct student *p1,*p;
	p=p1=(struct student*)malloc(sizeof(struct student));
	char ch;
	char num[10];
	p1=head;
	printf("input the recover number:");
	scanf("%s",num);
	fp=fopen("d://recycle.txt","rb");
	if(fp==NULL)
	{
		printf("����վΪ��!/n");
		return NULL;
	}
	else
	{
		printf("�Ƿ񽫻���վ�����ݻ�ԭ��Y/N \n");
		ch=getchar();
		ch=getchar();
		if(ch=='n'||ch=='N')
			printf("����Ҫ��ԭ��");
		else
		{
			while(1)
			{
				if(strcmp(p1->num,num)==0)
					break;
				else
					p1=p1->next;
			}
			while(!feof(fp))
			{
				fread(p,sizeof(struct student),1,fp);
				if(strcmp(p1->num,p->num)==0)
				{
					strcpy(p1->name,p->name);
					strcpy(p1->sex,p->sex);
					p1->age=p->age;
					strcpy(p1->birth,p->birth);
					p1->tele=p->tele;
					strcpy(p1->addr,p->addr);
					strcpy(p1->party,p->party);
					printf("dddddddddddddddddddd\n");
					break;

				}
			}

		}
		writetxt(head);

		p=head;
		while(p!=NULL)
		{
			printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p->num,p->name,p->sex,p->age,p->birth,p->tele,p->addr,p->party);
			p=p->next;
		}fclose(fp);
	}
	return head;
}
/////////////////////////////////////////////////////////////////////////////////
/*  ѧ����Ϣ��ɾ��*/
/////////////////////////////////////////////////////////////////////////////////
struct student *del(struct student *head)
{
	FILE *fp;
	struct student *p1,*p2,*p0;
	p1=p2=head;
	char ch;
	char num[10];
	printf("input the delete number:");
	scanf("%s",num);
	if(head==NULL)
		printf("nothing to delete!");
	else
	{
		while(p1!=NULL)
		{
			if(strcmp(p1->num,num)!=0)
			{
				p2=p1;
				p1=p1->next;
			}
			if(strcmp(p1->num,num)==0)
			{
				p0=p1;
				printf("�Ƿ�����ɾ����ѧ������Ϣ��Y/N\n");
				ch=getchar();
				ch=getchar();
				if(ch=='y'||ch=='Y')
				{
					printf("��ѧ����Ϣ�Ѿ��ɹ��Ӵ���ɾ����\n");
					if(p1==head)
					{
						p0=p1;
						head=p1->next;
						p1=p2=head;
						p1=p2->next;
					}
					else
					{
						p0=p1;
						p2->next=p1->next;
						p1=p2->next;
					}
					break;
				}
				else
				{
					fp=fopen("d://recycle.txt","ab+");
					if(fp==NULL)
					{
						printf("cannot open the file!");
						return NULL;
					}
					fwrite(p0,sizeof(struct student),1,fp);
					strcpy(p1->name,"0");
					strcpy(p1->sex,"0");
					p1->age=0;
					strcpy(p1->birth,"0");
					p1->tele=0;
					strcpy(p1->addr,"0");
					strcpy(p1->party,"0");

					printf("ѧ����Ϣ�ѷ������վ��\n");
					fclose(fp);


					printf("�����ָ��ո�ɾ����ѧ����Ϣ��������'Y'or'y'\n");
					printf("�������ָ��ո�ɾ����ѧ����Ϣ��������'N'or'n'\n");
					ch=getchar();
					ch=getchar();
					if(ch=='y'||ch=='Y')
					{
						head=recover(head);
						break;
					}
					if(ch=='n'||ch=='N')
						break ;
				}
			}

		}

	}
	writetxt(head);
	return head;
}
/////////////////////////////////////////////////////////////////////////////
/*        �����޸ı��溯��*/
////////////////////////////////////////////////////////////////////////////
void write()
{
	FILE *fp;
	struct secret p;
	int i;
	fp=fopen("d:\\mima.txt","wb");
	if(fp==NULL)
	{
		printf("cannot open!");

	}
	for(i=0;i<=len;i++)
	{
		p=use[i];
		fwrite(&p,sizeof(struct secret),1,fp);
	}
	fclose(fp);

}

////////////////////////////////////////////////////////////////////////////////
/*ѧ����Ϣ�Ĳ�ѯ*/
////////////////////////////////////////////////////////////////////////////////
void  research(struct student *head)
{
	struct student *p1,*p2;
	p1=p2=head;
	int i,j,l=1,k=0;
	char sex[20],party[10],ch,yes;
	int age;
	char num[10],name[20];
	printf("ѡ��1.ģ����ѯ   2.��ȷ��ѯ��");
	scanf("%d",&i);
	if(i==1)
	{
		while(l==1)
		{
			printf("ѡ��1.�Ա�  2.����  3.�Ƿ�Ա��");
			scanf("%d",&j);
			if(j==1)
			{    p1=head;
			printf("�����Ա�");
			scanf("%s",sex);
			ch=getchar();
			while(p1!=NULL)
			{
				if(strcmp(p1->sex,sex)==0)
				{
					printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
					p1=p1->next;
					continue;
				}
				k++;
				if(k==3)
					printf("��ѧ��������!\n");
				p1=p1->next;
			}
			printf("�Ƿ������ѯѧ��������ϢY/N\n");
			scanf("%c",&yes);
			printf("yes=%c/n",yes);
			if(yes=='N'||yes=='n')
				break;
			if(yes=='Y'||yes=='y')
				k=0;
			}
			if(j==2)
			{
				p1=head;
				printf("�������䣺");
				scanf("%d",&age);
				while(p1!=NULL)
				{
					if(p1->age==age)
					{
						printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
						p1=p1->next;
						continue;
					}
					k++;
					if(k==3)
						printf("��ѧ��������!\n");
					p1=p1->next;
				}
				printf("�Ƿ������ѯѧ��������ϢY/N\n");
				ch=getchar();
				scanf("%c",&yes);
				if(yes=='N'||yes=='n')
					break;
				if(yes=='Y'||yes=='y')
					k=0;
			}
			if(j==3)
			{
				p1=head;
				printf("�����Ƿ�Ա��");
				scanf("%s",party);
				ch=getchar();
				while(p1!=NULL)
				{
					if(strcmp(p1->party,party)==0)
					{
					 printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
					 p1=p1->next;
					 continue;
					}
					k++;
					if(k==3)
						printf("��ѧ��������!/n");
					p1=p1->next;
				}
				printf("�Ƿ������ѯѧ��������Ϣ��Y/N\n");
				scanf("%c",&yes);
				if(yes=='N'||yes=='n')
					break;
				if(yes=='Y'||yes=='y')
					k=0;
			}
		}
	}
	if(i==2)
	{
		printf("��ѡ��ϸ��Ĺؼ��֣�1.ѧ��ѧ��  2.ѧ��������");
		scanf("%d",&j);
		if(j==1)
		{
			while(1)
			{
				p1=head;
				printf("����ѧ����ѧ�ţ�");
				scanf("%5s",num);
				while(p1!=NULL)
				{
					if(strcmp(p1->num,num)==0)
					{
						printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
						p1=p1->next;continue;
					}
					k++;
					if(k==3)
						printf("��ѧ��������!\n");
					p1=p1->next;
				}
				printf("�Ƿ������ѯ����ѧ����Ϣ?Y/N\n");
				ch=getchar();
				scanf("%c",&yes);
				if(yes=='N'||yes=='n')
					break;
				if(yes=='Y'||yes=='y')
					k=0;
			}
		}
		if(j==2)
		{
			while(1)
			{
				p1=head;
				printf("����ѧ�������֣�");
				scanf("%s",name);
				while(p1!=NULL)
				{
					if(strcmp(p1->name,name)==0)
					{
						printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p1->num,p1->name,p1->sex,p1->age,p1->birth,p1->tele,p1->addr,p1->party);
						p1=p1->next;continue;
					}
					k++;
					if(k==3)
						printf("��ѧ��������!\n");
					p1=p1->next;
				}
				printf("�Ƿ������ѯ����ѧ����Ϣ?Y/N\n");
				ch=getchar();
				scanf("%c",&yes);
				if(yes=='N'||yes=='n')
					break;
				if(yes=='Y'||yes=='y')
					k=0;
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void  research1(char num[])
{
	int i;
	for(i=0;i<=len;i++)
		if(strcmp(stud[i].num,num)==0)
			printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",stud[i].num,stud[i].name,stud[i].sex,stud[i].age,stud[i].birth,stud[i].tele,stud[i].addr,stud[i].party);
}

/////////////////////////////////////////////////////////////////////////////
/*        �����޸ĺ���-*/
////////////////////////////////////////////////////////////////////////////
void mimacli()
{
	char use1[30],mima[30],newmima[30],ch;
	int i,j=0;
	printf("�����û�����\n");
	scanf("%s",use1);
	printf("�������룺\n");
	while(1)
	{
		mima[j]=getch();
		if(mima[j]==13)
			break;
		putchar('*');
		j++;
	}
	mima[j]='/0';
	printf("/n");
	for(i=0;i<=len;i++)
	{
		if(strcmp(stud[i].name,"0")==0)
		{
			printf("��ѧ��������\n");
			continue;
		}
		if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
		{
			printf("���������룺\n");
			ch=getchar();
			j=0;
			while(1)
			{
				newmima[j]=getch();
				if(newmima[j]==13)
					break;
				putchar('*');
				j++;
			}
			newmima[j]='/0';
			printf("/n");
			strcpy(use[i].code,newmima);
			write();
			for(i=0;i<=len;i++){
				printf("//////////////////////////////////////////////\n");
				printf("%s    ",use[0].user);
				printf("%s/n",use[0].code);
				printf("//////////////////////////////////////////////\n");}
			break;
		}
		if(strcmp(use1,use[1].user)<0||strcmp(use1,use[len].user)>0)
		{
			printf("**************************************\n");
			printf("         4�û�������           \n");
			printf("***************************************\n");

			break;
		}
		if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
		{
			printf("**************************************\n");
			printf("         �������           /n");
			printf("***************************************\n");

			break;
		}
	}
}
/////////////////////////////////////////////////////////////////////////////
/*        ѧ����Ϣ����ϵͳ�Ĳ˵�����-ϵͳ����*/
////////////////////////////////////////////////////////////////////////////
int menu()
{
	int sn,i,j=0;
	char use1[30];
	char mima[30];
	int m=0;
	printf("          ѧ����Ϣ����ϵͳ\n");
	printf("=========================================\n");
	printf("        1.ѧ����Ϣ������ע��\n");
	printf("        2.ѧ����Ϣ���޸�\n");
	printf("        3.ѧ����Ϣ�����\n");
	printf("        4.ѧ����Ϣ��ɾ��\n");
	printf("        5.ѧ���ɼ���Ϣ��¼��\n");
	printf("        6.ѧ����Ϣ�Ĳ�ѯ\n");
	printf("        7.������������޸�\n");
	printf("        8.�ָ���ɾѧ����Ϣ\n");
	printf("        0.�˳�ѧ����Ϣ����ϵͳ\n");
	printf("==========================================\n");
	printf("��ѡ��0-8:\n");
	while(1)
	{
		scanf("%d",&sn);
		if(sn==7)
			for(i=1;i<=len;i++)
			{
				strcpy(use[i].user,stud[i-1].num );
				strcpy(use[i].code,stud[i-1].num );
			}
			if(sn>1&&sn<7||sn==8)
			{

				printf("�����������û�����");
				scanf("%s",use1);
				printf("�������������룺");
				while(1)
				{
					mima[j]=getch();
					if(mima[j]==13)
						break;
					putchar('*');
					j++;
				}
				mima[j]='/0';
				printf("\n");
				if(sn==6)
					if(strcmp(use1,use[0].user)!=0)
					{
						for(i=0;i<=len;i++)
						{
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
							{
								if(i!=0)
						  {
							  printf("**************************************\n");
							  printf("         ��ֻ�ܲ��������˵���Ϣ        \n");
							  printf("***************************************\n");
							  research1(use1);
							  break;
						  }
							}
							if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         �������           \n");
						  printf("***************************************\n");
						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  printf("��������:\n");
								  printf("�����������û�����");
								  scanf("%s",use1);
								  printf("�������������룺");
								  j=0;
								  while(1)
								  {
									  mima[j]=getch();
									  if(mima[j]==13)
										  break;
									  putchar('*');
									  j++;
								  }
								  mima[j]='/0';
								  if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
								  {
									  printf("**************************************\n");
									  printf("         �������           \n");
									  printf("***************************************\n");
								  }
							  }
							  else
							  {
								  sn=0;
								  break;
							  }
						  }
						  sn=0;
						  break;
							}
							if(strcmp(use1,use[1].user)<0||strcmp(use1,use[len].user)>0)
							{
								printf("**************************************\n");
								printf("         3�û�������           \n");
								printf("***************************************\n");
								sn=0;
								break;
				   }
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         �������           \n");
						  printf("***************************************\n");
						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
									 {
										 printf("**************************************\n");
										 printf("         ��û��Ȩ��������            \n");
										 printf("***************************************\n");
										 sn=0;
										 break;
									 }
								  printf("��������:\n");
								  printf("�����������û�����");
								  scanf("%s",use1);
								  printf("�������������룺");
								  j=0;
								  while(1)
								  {
									  mima[j]=getch();
									  if(mima[j]==13)
										  break;
									  putchar('*');
									  j++;
								  }
								  mima[j]='/0';
								  printf("/n");
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
								  {
									  printf("**************************************\n");
									  printf("         �������           /n");
									  printf("***************************************\n");

								  }
								  else
								  {
									  printf("**************************************\n");
									  printf("         ��ӭ����½��ϵͳ            \n");
									  printf("***************************************\n");
									  research1(use1);
											break;
								  }
									}
							  else
							  {
								  sn=0;
								  break;
							  }
						  }
				   }
						}
					}
					for(i=0;i<=len;i++)
					{
						if(sn==6)
							if(strcmp(use1,use[0].user)!=0)
						 {
							 sn=0;
							 break;
						 }
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
							{
								if(i!=0)
								{
									printf("**************************************\n");
									printf("         ��û��Ȩ��������            \n");
									printf("***************************************\n");
							  sn=0;
							  break;
								}
								else
								{
									printf("**************************************\n");
									printf("         ��ӭ����½��ϵͳ            \n");
									printf("***************************************\n");
									break;
								}
							}
							if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         �������           \n");
						  printf("**************************************\n");

						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  printf("��������:\n");
								  printf("�����������û�����");
								  scanf("%s",use1);
								  printf("�������������룺");
								  j=0;
								  while(1)
								  {
									  mima[j]=getch();
									  if(mima[j]==13)
										  break;
									  putchar('*');
									  j++;
								  }
								  mima[j]='/0';
								  printf("\n");
								  if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
								  {
									  printf("**************************************\n");
									  printf("         �������           \n");
									  printf("***************************************\n");
								  }
									 else
									 {
										 printf("**************************************\n");
										 printf("         ��ӭ����½��ϵͳ            \n");
										 printf("***************************************\n");
											break;
								  }
							  }
							  else
							  {
								  sn=0;
								  break;
							  }
						  }
						  break;
							}
							if(strcmp(use1,use[1].user)<0||strcmp(use1,use[len].user)>0)
							{
								printf("**************************************\n");
								printf("         �û�������           \n");
								printf("***************************************\n");
								sn=0;
								break;
				   }
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         �������           \n");
						  printf("***************************************\n");

						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
									 {
										 printf("**************************************\n");
										 printf("         ��û��Ȩ��������            \n");
										 printf("***************************************\n");
										 sn=0;
										 break;

									 }
								  printf("��������:\n");
								  printf("�����������û�����");
								  scanf("%s",use1);
								  printf("�������������룺");
								  j=0;
								  while(1)
								  {
									  mima[j]=getch();
									  if(mima[j]==13)
										  break;
									  putchar('*');
									  j++;
								  }
								  mima[j]='/0';
								  printf("/n");
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
								  {
									  printf("**************************************\n");
									  printf("         �������           \n");
									  printf("***************************************\n");

								  }
							  }
							  else
							  {
								  sn=0;
								  break;
							  }
						  }

							}
					}
			}
			if (sn<0 || sn>8)
			{
				printf("\n/t���������ѡ0-8\n");
				break;
			}
			else
				break;
	}
	return sn;
}

/////////////////////////////////////////////////////////////////////////////////
/*  ѧ����Ϣ����ϵͳ��������--ϵͳ����*/
/////////////////////////////////////////////////////////////////////////////////
int main()
{
	struct student *head;
	int i,j=0;
	while(1)
	{
		switch(menu())
		{
		case 1:
			printf("**************************************\n");
			printf("         	ѧ����Ϣ������ע��            \n");
			printf("***************************************\n");
			head=create();
			FILE *fp;
			struct secret p;
			fp=fopen("d:\\mima.txt","rb");
			if(fp==NULL)
				printf("open error\n");
			else
			{
				for(i=0;i<=len;i++)
				{
					fread(&p,sizeof(struct secret),1,fp);
					strcpy(use[i].user,p.user);
					strcpy(use[i].code,p.code);
				}

				fclose(fp);
			}

			break;

		case 2:
			printf("**************************************\n");
			printf("ѧ����Ϣ���޸�\n");
			printf("**************************************\n");
			change(head);
			break;
		case 3:
			printf("**************************************\n");
			printf("ѧ����Ϣ�����\n");
			printf("**************************************\n");
			head=insert(head);
			break;
		case 4:
			printf("**************************************\n");
			printf("ѧ���ɼ���Ϣ��ɾ����\n");
			printf("**************************************\n");
			head=del(head);
			break;
		case 5:
			printf("**************************************\n");
			printf("ѧ���ɼ���Ϣ��¼��\n");
			printf("**************************************\n");
			head=chengji(head);
			break;
		case 6:
			printf("**************************************\n");
			printf("ѧ����Ϣ�Ĳ�ѯ/n");
			printf("**************************************\n");
			research(head);
			break;
		case 7:
			printf("**************************************\n");
			printf("������������޸�\n");
			printf("**************************************\n");
			mimacli();
			break;
		case 8:
			printf("**************************************\n");
			printf("�ָ���ɾ��Ϣ\n");
			printf("**************************************\n");
			recover(head);
			break;
		case 0:
			printf("**************************************\n");
			printf("�˳�ѧ����Ϣ����ϵͳ\n");
			printf("**************************************\n");
			printf("The end.\n");
			break;
		default: printf("\nѡ�����,����ѡ!\n");
			getchar();
			getchar();
		}
		system("cls");
	}
}
