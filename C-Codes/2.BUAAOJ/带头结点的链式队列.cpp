#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAXSIZE 100
using namespace std;

typedef struct frameData
{
      int data;
      struct frameData *next;
}FRAME_DATA_ST, *LPFRAME_DATA_ST;

typedef struct frameQueue
{
      LPFRAME_DATA_ST front;  // 队头
      LPFRAME_DATA_ST rear;  //队尾
      unsigned int totalLenght;     //整个队列的长度
      unsigned int currLenght;     //记录当前队列的长度
}FRAME_QUEUE_ST, *LPFRAME_QUEUE_ST;



/*初始化队列*/

int initFrameData(LPFRAME_QUEUE_ST lq)
{
     lq->front=lq->rear = new FRAME_DATA_ST;//为头结点分配内存
     if(!lq->front)
     {
          return false;

     }
     lq->front->next=NULL;
     lq->rear->next=NULL;//
     lq->totalLenght = MAXSIZE ;
     lq->currLenght = 0;

     return true;
}

//插入一个元素到队尾

int writeNode(LPFRAME_QUEUE_ST lq, int data)
{
     if (lq->currLenght == lq->totalLenght)  // 队列已满
     {
            //fprintf(stderr, "queue is full.\n");

           return false;
     }
     LPFRAME_DATA_ST (lq->rear)->next = new FRAME_DATA_ST;
//     node->data =  data;
//     node->next = NULL;
//     lq->rear = lq->rear->next = node; //或者写成lq->rear->next = node, lq->rear = node;
     lq->rear=lq->rear->next;
     lq->rear->data=data;
     lq->rear->next=NULL;
     lq->currLenght++;
     return true;
}

//从队头出去一个元素

int readFrameData(LPFRAME_QUEUE_ST lq, int *data)
{
      if (lq->front == lq->rear)  //队列已空
      {
            //fprintf(stderr, "queue is empty.\n");

            return false;
      }

      LPFRAME_DATA_ST node= lq->front->next;

      *data = node->data;
      lq->front->next = node->next;
      if(lq->rear==node)
      {
          lq->rear=lq->front;
      }
      delete node;
      lq->currLenght--;
      return true;
}

/*摧毁整个队列*/

void DestoryFrameData(LPFRAME_QUEUE_ST lq)
{
     while(lq->front)
     {
          lq->rear = lq->front->next;
          delete lq->front;
          lq->front = lq->rear;
     }
}

int main()
{
    LPFRAME_QUEUE_ST q;
    initFrameData(q);
    writeNode(q,1);
    writeNode(q,2);
    writeNode(q,3);
    writeNode(q,4);
    writeNode(q,5);
    cout<<"队尾是："<<q->rear->data<<" 队首是："<<q->front->data<<endl;
    DestoryFrameData(q);
}
