#include<stdio.h>
#include<stdlib.h>
#define N 10
 
typedef struct node {
    char val;
    struct node *next;
} link,*plink;
int i=0,j=0;
char a[N]="I am boy!";
 
link *make_node(int n)
{
    link *p=NULL;
        if ((p = (link *) malloc(sizeof(link))) == NULL) {
            printf("error!");
            return NULL;
        }
        p->next = NULL;
        p->val=n;
        return p;
}
//头查
/*void insert1(plink *head,link* p)
{
     
    p ->next=*head;
        *head=p;
}*/
//进栈
/*void push (plink *head,link*p){
 
    insert1(head,p);
}*/
//尾查
 void insert2(plink *head,link*p)
{
    plink s=*head;
    if(*head==NULL)
     *head=p;
    else
    {
        while(s->next)
        s = s->next;
        s->next=p;
 
    }
} 
//进队
void enqueue(plink*head,link*p){
 
    insert2(head,p);
}
//出队
link*dequeue(plink*head){
 
    plink p=NULL;
    if(NULL==*head)return NULL;
    p=*head;
    *head=(*head)->next;
    return p;
 
}
//出栈
/*link* pop(plink *head){
 
    plink *p=NULL;
    if(NULL==*head)return NULL;
    p=head;
    *head=(*head)->next;
    return *p;
}*/
//判空
int is_empty(plink*head){
 
return  *head==NULL;
}
//查询
/*link* serach(plink head,int key){
 
        plink p;
    for (p = head; p; p = p->next)
        if (p->val == key)
        return p;
        return NULL;
}*/
//遍历
void traverse(void (*visit)(plink),plink head)
 
{
 
        plink p;
    for (p = head; p; p = p->next)
                visit(p);
}
void visit(plink p)
{
printf("%c",p->val);
}
/*
//删除
void delete(plink *head,plink p)
 
{
    plink pre;
        if (p == *head)
        {
            *head = p->next;
            return;
        }
    for (pre = *head; pre; pre = pre->next)
        if (pre->next == p)
        {
            pre->next = p->next;
            return;
        }
 
}
//释放
void destroy(plink *head)
{
        plink q, p = *head;
            *head = NULL;
                while (p)
                {
                q = p;
                p = p->next;
                free_node(q);
                }
}
 
free_node(link *p)
 
{
    if (p)
        free(p);
}
*/
int main(int argc, char *argv[]) {
         
    link *head=NULL, *p=NULL, *s=NULL;
    for (i = 0; i<N; i++)
//  insert1(&head,make_node(a[i]));
//  insert2(&head,make_node(a[i]));
//  push(&head,make_node(a[i]));
//  plink f=head;
//  head=pop(&head);
    enqueue(&head,make_node(a[i]));
 
    plink f=head;
//  is_empyt(head);
    for(i=0;i<N;i++)
    while((p=dequeue(&head))!='\0'){
 
        printf("%c",p->val);
        }
//          printf("\n");
//  printf("%d\n",serach(f,5)->val);
//      traverse(visit,head);
//      delete(&f,serach(f,5));
        printf("\n");
//      destroy(&f);
         
//      while(f)
//      {
//      printf("%c",f->val);
//          f=f->next;
//      
//      }
//      free_node(p);
}
