#include "stdio.h"
#include "malloc.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
#define M 3
struct student
{
	char  num[10];                  /* 学生的学号 */
	char name[20];              /* 学生的姓名 */
	char sex[5];                   /* 学生的性别 */
	int age;			    	/* 学生的年龄 */
	char birth[20];				/* 学生的出生年月 */
	long tele;					/* 学生的电话号码 */
	char addr[30];				/* 学生的地址 */
	char party[10];				/* 学生是否为党员 */
	float score[M];				/* 学生各门学科成绩 */
	float total;				/* 学生的学科成绩总分 */
	struct student *next;

}stud[100];
struct secret
{
	char user[30];
	char code[30];

}use[100];
int len;      //学生人数

/////////////////////////////////////////////////////////////////////////////////
/*学生信息写入到文件中-----系统函数*/
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
/*	     学生信息的整体注册*/
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
		printf("\n           文件还不存在，是否创建？(Y/N)\n");
		ch=getchar();
		len=1;
		scanf("%c",&ok);
		if(ok=='Y'||ok=='y')
		{
			p1=p2=(struct student *) malloc(sizeof(struct student));
			if((len)<10)
				printf("请输入0%d的学号\n:",len);
			else
				printf("请输入%d的学号:\n",len);
			scanf("%s",p1->num);
			if((len)<10)
				printf("请输入0%d的姓名:\n",len);
			else
				printf("请输入%d的姓名:\n",len);
			scanf("%s",p1->name);
			if((len)<10)
				printf("请输入0%d的性别:\n",len);
			else
				printf("请输入%d的性别:\n",len);
			scanf("%s",p1->sex);
			ch=getchar();
			if((len)<10)
				printf("请输入0%d的年龄:\n",len);
			else
				printf("请输入%d的年龄:\n",len);
			scanf("%d",&p1->age);
			if((len)<10)
				printf("请输入0%d的生日:\n",len);
			else
				printf("请输入%d的生日:\n",len);
			scanf("%s",p1->birth);
			if((len)<10)
				printf("请输入0%d的电话:\n",len);
			else
				printf("请输入%d的电话号:\n",len);
			scanf("%ld",&p1->tele);
			if((len)<10)
				printf("请输入0%d的地址:\n",len);
			else
				printf("请输入%d的地址:\n",len);
			scanf("%s",p1->addr);
			if((len)<10)
				printf("请输入0%d是否为党员:\n",len);
			else
				printf("请输入%d是否为党员:\n",len);
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
					printf("请输入0%d的学号:\n",len);
				else
					printf("请输入%d的学号:\n",len);
				scanf("%s",p1->num);
				if((len)<10)
					printf("请输入0%d的姓名:\n",len);
				else
					printf("请输入%d的姓名:\n",len);
				scanf("%s",p1->name);
				if((len)<10)
					printf("请输入0%d的性别:\n",len);
				else
					printf("请输入%d的性别:\n",len);
				scanf("%s",p1->sex);
				ch=getchar();
				if((len)<10)
					printf("请输入0%d的年龄:\n",len);
				else
					printf("请输入%d的年龄:\n",len);
				scanf("%d",&p1->age);
				if((len)<10)
					printf("请输入0%d的生日:\n",len);
				else
					printf("请输入%d的生日:\n",len);
				scanf("%s",p1->birth);
				if((len)<10)
					printf("请输入0%d的电话:\n",len);
				else
					printf("请输入%d的电话号:\n",len);
				scanf("%ld",&p1->tele);
				if((len)<10)
					printf("请输入0%d的地址:\n",len);
				else
					printf("请输入%d的地址:\n",len);
				scanf("%s",p1->addr);
				if((len)<10)
					printf("请输入0%d是否为党员:\n",len);
				else
					printf("请输入%d是否为党员:\n",len);
				scanf("%s",p1->party);
			}
			p2->next=NULL;
			writetxt(head);
			return (head);
		}
	}
	if(ok=='N'||ok=='n')
	{
		printf("请重新选择\n");
		return NULL;
	}
	else
	{
		printf("\n           文件已经存在\n");
		fp=fopen("d:\\student.txt","rb");
		p=stud;
		for(i=0;!feof(fp);i++)
			fread(stud+i,sizeof(struct student),1,fp);
		len=i-1;
		printf("             文件里含有%d条学生信息\n",len);
		printf("\n           是否使用已经存在的学生数据？(Y/N)\n");
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
				printf("学号       姓名       性别      年龄      出生年月     电话号码   地址  是否党员\n");
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
				printf("请输入0%d的学号:\n",len);
			else
				printf("请输入%d的学号:\n",len);
			scanf("%s",p1->num);
			if((len)<10)
				printf("请输入0%d的姓名:\n",len);
			else
				printf("请输入%d的姓名:\n",len);
			scanf("%s",p1->name);
			if((len)<10)
				printf("请输入0%d的性别:\n",len);
			else
				printf("请输入%d的性别:\n",len);
			scanf("%s",p1->sex);
			ch=getchar();
			if((len)<10)
				printf("请输入0%d的年龄:\n",len);
			else
				printf("请输入%d的年龄:\n",len);
			scanf("%d",&p1->age);
			if((len)<10)
				printf("请输入0%d的生日:\n",len);
			else
				printf("请输入%d的生日:\n",len);
			scanf("%s",p1->birth);
			if((len)<10)
				printf("请输入0%d的电话:\n",len);
			else
				printf("请输入%d的电话号:\n",len);
			scanf("%ld",&p1->tele);
			if((len)<10)
				printf("请输入0%d的地址:\n",len);
			else
				printf("请输入%d的地址:\n",len);
			scanf("%s",p1->addr);
			if((len)<10)
				printf("请输入0%d是否为党员:\n",len);
			else
				printf("请输入%d是否为党员:\n",len);
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
					printf("请输入0%d的学号:\n",len);
				else
					printf("请输入%d的学号:\n",len);
				scanf("%s",p1->num);
				if((len)<10)
					printf("请输入0%d的姓名:\n",len);
				else
					printf("请输入%d的姓名:\n",len);
				scanf("%s",p1->name);
				if((len)<10)
					printf("请输入0%d的性别:\n",len);
				else
					printf("请输入%d的性别:\n",len);
				scanf("%s",p1->sex);
				ch=getchar();
				if((len)<10)
					printf("请输入0%d的年龄:\n",len);
				else
					printf("请输入%d的年龄:\n",len);
				scanf("%d",&p1->age);
				if((len)<10)
					printf("请输入0%d的生日:\n",len);
				else
					printf("请输入%d的生日:\n",len);
				scanf("%s",p1->birth);
				if((len)<10)
					printf("请输入0%d的电话:",len);
				else
					printf("请输入%d的电话号:",len);
				scanf("%ld",&p1->tele);
				if((len)<10)
					printf("请输入0%d的地址:",len);
				else
					printf("请输入%d的地址:",len);
				scanf("%s",p1->addr);
				if((len)<10)
					printf("请输入0%d是否为党员:",len);
				else
					printf("请输入%d是否为党员:",len);
				scanf("%s",p1->party);
			}
			p2->next=NULL;
			writetxt(head);
		}
		return (head);
	}
}
////////////////////////////////////////////////////////////////////////////////
/*学生信息的修改*/
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
		printf("原链表为空");
		return NULL;
	}
	else
	{
		while(1)
		{
			printf("请输入学号\n");
			scanf("%s",num);
			p=head;
			while(p!=NULL&&strcmp(p->num,num)!=0)
			{
				p=p->next;
				if(p==NULL)
				{
					printf("该学生不存在\n");
					break;
				}
				if(strcmp(p->name,"0")==0)
				{
					printf("该学生已不存在\n");
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
				printf("请选择1.性别 2.年龄 3.出生日期4.电话 5.家庭住址6.党员\n");
				scanf("%d",&choose);
				if(choose==1)
				{
					printf("请输入新的性别：\n");
					scanf("%s",&sex);
					p1=sex;
					strcpy(p->sex,p1);
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==2)
				{
					printf("请输入新的年龄：\n");
					scanf("%d",&age);
					p->age=age;
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==3)
				{
					printf("请输入新的出生日期：\n");
					scanf("%s",birth);
					p1=birth;
					strcpy(p->birth,p1);
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==4)
				{
					printf("请输入新的电话：\n");
					scanf("%d",&tele);
					p->tele=tele;
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==5)
				{
					printf("请输入新的家庭住址：\n");
					scanf("%s",addr);
					p1=addr;
					strcpy(p->addr,p1);
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
				if(choose==6)
				{
					printf("请输入'是'或'否'：\n");
					scanf("%s",party);
					p1=party;
					strcpy(p->party,p1);
					printf("是否继续修改本学生学生其他信息Y/N\n");
					ch=getchar();
					scanf("%c",&yes);
					if(yes=='N'||yes=='n')
						break;
				}
			}
			printf("是否继续修改其他学生Y/N\n");
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
/*学生成绩信息的录入*/
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
			printf("该学生不存在\n");
			p1=p1->next;
			continue;
		}
		printf("请输入学号为%s学生的高数、C语言、英语成绩:\n",p1->num);
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
	printf("学号       姓名       性别      年龄      出生年月     电话号码   地址  是否党员\n");
	while(p!=NULL)
	{
		printf("%2s%15s%10s%10d%15s%8ld%10s%8s\n",p->num,p->name,p->sex,p->age,p->birth,p->tele,p->addr,p->party);
		p=p->next;
	}
	return(head);
}
/////////////////////////////////////////////////////////////////////////////////
/*学生信息的添加*/
/////////////////////////////////////////////////////////////////////////////////
struct student *insert(struct student *head)
{
	char ch,ok;
	struct student *p,*p0,*p1;
	p=p1=head;
	while(1)
	{
		if((len+1)<10)
			printf("您的学号为0%d\n",len+1);
		else
			printf("您的学号为%d\n",len+1);
		p0=(struct student *)malloc(sizeof(struct student));
		len++;
		if((len)<10)
			printf("请输入0%d的学号:",len);
		else
			printf("请输入%d的学号:",len);
		scanf("%s",p0->num);
		if((len)<10)
			printf("请输入0%d的姓名:",len);
		else
			printf("请输入%d的姓名:",len);
		scanf("%s",p0->name);
		if((len)<10)
			printf("请输入0%d的性别:",len);
		else
			printf("请输入%d的性别:",len);
		scanf("%s",p0->sex);
		ch=getchar();
		if((len)<10)
			printf("请输入0%d的年龄:",len);
		else
			printf("请输入%d的年龄:",len);
		scanf("%d",&p0->age);
		if((len)<10)
			printf("请输入0%d的生日:",len);
		else
			printf("请输入%d的生日:",len);
		scanf("%s",p0->birth);
		if((len)<10)
			printf("请输入0%d的电话:",len);
		else
			printf("请输入%d的电话号:",len);
		scanf("%ld",&p0->tele);
		if((len)<10)
			printf("请输入0%d的地址:",len);
		else
			printf("请输入%d的地址:",len);
		scanf("%s",p0->addr);
		if((len)<10)
			printf("请输入0%d是否为党员:",len);
		else
			printf("请输入%d是否为党员:",len);
		scanf("%s",p0->party);
		while(p->next!=NULL)
			p=p->next;
		p->next=p0;
		p0->next=NULL;
		printf("是否继续添加Y/N\n")	;
		ch=getchar();
		scanf("%c",&ok);
		if(ok=='y'||ok=='Y')len++;
		else
		{
			printf("您需要重新进行1的操作来完成该学生信息的注册,谢谢!\n");
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
/*  恢复误删的学生信息*/
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
		printf("回收站为空!/n");
		return NULL;
	}
	else
	{
		printf("是否将回收站的数据还原？Y/N \n");
		ch=getchar();
		ch=getchar();
		if(ch=='n'||ch=='N')
			printf("不需要还原！");
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
/*  学生信息的删除*/
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
				printf("是否永久删除该学生的信息？Y/N\n");
				ch=getchar();
				ch=getchar();
				if(ch=='y'||ch=='Y')
				{
					printf("该学生信息已经成功从磁盘删除！\n");
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

					printf("学生信息已放入回收站！\n");
					fclose(fp);


					printf("如果想恢复刚刚删除的学生信息，请输入'Y'or'y'\n");
					printf("如果不想恢复刚刚删除的学生信息，请输入'N'or'n'\n");
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
/*        密码修改保存函数*/
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
/*学生信息的查询*/
////////////////////////////////////////////////////////////////////////////////
void  research(struct student *head)
{
	struct student *p1,*p2;
	p1=p2=head;
	int i,j,l=1,k=0;
	char sex[20],party[10],ch,yes;
	int age;
	char num[10],name[20];
	printf("选择：1.模糊查询   2.精确查询：");
	scanf("%d",&i);
	if(i==1)
	{
		while(l==1)
		{
			printf("选择：1.性别  2.年龄  3.是否党员：");
			scanf("%d",&j);
			if(j==1)
			{    p1=head;
			printf("输入性别：");
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
					printf("该学生不存在!\n");
				p1=p1->next;
			}
			printf("是否继续查询学生其他信息Y/N\n");
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
				printf("输入年龄：");
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
						printf("该学生不存在!\n");
					p1=p1->next;
				}
				printf("是否继续查询学生其他信息Y/N\n");
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
				printf("输入是否党员：");
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
						printf("该学生不存在!/n");
					p1=p1->next;
				}
				printf("是否继续查询学生其他信息？Y/N\n");
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
		printf("请选择细查的关键字：1.学生学号  2.学生姓名：");
		scanf("%d",&j);
		if(j==1)
		{
			while(1)
			{
				p1=head;
				printf("输入学生的学号：");
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
						printf("该学生不存在!\n");
					p1=p1->next;
				}
				printf("是否继续查询其他学生信息?Y/N\n");
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
				printf("输入学生的名字：");
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
						printf("该学生不存在!\n");
					p1=p1->next;
				}
				printf("是否继续查询其他学生信息?Y/N\n");
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
/*        密码修改函数-*/
////////////////////////////////////////////////////////////////////////////
void mimacli()
{
	char use1[30],mima[30],newmima[30],ch;
	int i,j=0;
	printf("输入用户名：\n");
	scanf("%s",use1);
	printf("输入密码：\n");
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
			printf("该学生不存在\n");
			continue;
		}
		if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
		{
			printf("输入新密码：\n");
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
			printf("         4用户名错误           \n");
			printf("***************************************\n");

			break;
		}
		if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
		{
			printf("**************************************\n");
			printf("         密码错误           /n");
			printf("***************************************\n");

			break;
		}
	}
}
/////////////////////////////////////////////////////////////////////////////
/*        学生信息管理系统的菜单函数-系统函数*/
////////////////////////////////////////////////////////////////////////////
int menu()
{
	int sn,i,j=0;
	char use1[30];
	char mima[30];
	int m=0;
	printf("          学生信息管理系统\n");
	printf("=========================================\n");
	printf("        1.学生信息的整体注册\n");
	printf("        2.学生信息的修改\n");
	printf("        3.学生信息的添加\n");
	printf("        4.学生信息的删除\n");
	printf("        5.学生成绩信息的录入\n");
	printf("        6.学生信息的查询\n");
	printf("        7.访问者密码的修改\n");
	printf("        8.恢复误删学生信息\n");
	printf("        0.退出学生信息管理系统\n");
	printf("==========================================\n");
	printf("请选择0-8:\n");
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

				printf("请输入您的用户名：");
				scanf("%s",use1);
				printf("请输入您的密码：");
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
							  printf("         您只能查找您本人的信息        \n");
							  printf("***************************************\n");
							  research1(use1);
							  break;
						  }
							}
							if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         密码错误           \n");
						  printf("***************************************\n");
						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  printf("重新输入:\n");
								  printf("请输入您的用户名：");
								  scanf("%s",use1);
								  printf("请输入您的密码：");
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
									  printf("         密码错误           \n");
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
								printf("         3用户名错误           \n");
								printf("***************************************\n");
								sn=0;
								break;
				   }
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         密码错误           \n");
						  printf("***************************************\n");
						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
									 {
										 printf("**************************************\n");
										 printf("         您没有权限来操作            \n");
										 printf("***************************************\n");
										 sn=0;
										 break;
									 }
								  printf("重新输入:\n");
								  printf("请输入您的用户名：");
								  scanf("%s",use1);
								  printf("请输入您的密码：");
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
									  printf("         密码错误           /n");
									  printf("***************************************\n");

								  }
								  else
								  {
									  printf("**************************************\n");
									  printf("         欢迎您登陆本系统            \n");
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
									printf("         您没有权限来操作            \n");
									printf("***************************************\n");
							  sn=0;
							  break;
								}
								else
								{
									printf("**************************************\n");
									printf("         欢迎您登陆本系统            \n");
									printf("***************************************\n");
									break;
								}
							}
							if(strcmp(use1,use[0].user)==0&&strcmp(use[0].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         密码错误           \n");
						  printf("**************************************\n");

						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  printf("重新输入:\n");
								  printf("请输入您的用户名：");
								  scanf("%s",use1);
								  printf("请输入您的密码：");
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
									  printf("         密码错误           \n");
									  printf("***************************************\n");
								  }
									 else
									 {
										 printf("**************************************\n");
										 printf("         欢迎您登陆本系统            \n");
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
								printf("         用户名错误           \n");
								printf("***************************************\n");
								sn=0;
								break;
				   }
							if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)!=0)
					  {
						  printf("**************************************\n");
						  printf("         密码错误           \n");
						  printf("***************************************\n");

						  while(1)
						  {
							  m++;
							  if(m<3)
							  {
								  if(strcmp(use1,use[i].user)==0&&strcmp(use[i].code,mima)==0)
									 {
										 printf("**************************************\n");
										 printf("         您没有权限来操作            \n");
										 printf("***************************************\n");
										 sn=0;
										 break;

									 }
								  printf("重新输入:\n");
								  printf("请输入您的用户名：");
								  scanf("%s",use1);
								  printf("请输入您的密码：");
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
									  printf("         密码错误           \n");
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
				printf("\n/t输入错误，重选0-8\n");
				break;
			}
			else
				break;
	}
	return sn;
}

/////////////////////////////////////////////////////////////////////////////////
/*  学生信息管理系统的主函数--系统函数*/
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
			printf("         	学生信息的整体注册            \n");
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
			printf("学生信息的修改\n");
			printf("**************************************\n");
			change(head);
			break;
		case 3:
			printf("**************************************\n");
			printf("学生信息的添加\n");
			printf("**************************************\n");
			head=insert(head);
			break;
		case 4:
			printf("**************************************\n");
			printf("学生成绩信息的删除入\n");
			printf("**************************************\n");
			head=del(head);
			break;
		case 5:
			printf("**************************************\n");
			printf("学生成绩信息的录入\n");
			printf("**************************************\n");
			head=chengji(head);
			break;
		case 6:
			printf("**************************************\n");
			printf("学生信息的查询/n");
			printf("**************************************\n");
			research(head);
			break;
		case 7:
			printf("**************************************\n");
			printf("访问者密码的修改\n");
			printf("**************************************\n");
			mimacli();
			break;
		case 8:
			printf("**************************************\n");
			printf("恢复误删信息\n");
			printf("**************************************\n");
			recover(head);
			break;
		case 0:
			printf("**************************************\n");
			printf("退出学生信息管理系统\n");
			printf("**************************************\n");
			printf("The end.\n");
			break;
		default: printf("\n选择错误,请重选!\n");
			getchar();
			getchar();
		}
		system("cls");
	}
}
