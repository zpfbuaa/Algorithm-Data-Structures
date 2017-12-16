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
      LPFRAME_DATA_ST front;  // ��ͷ
      LPFRAME_DATA_ST rear;  //��β
      unsigned int totalLenght;     //�������еĳ���
      unsigned int currLenght;     //��¼��ǰ���еĳ���
}FRAME_QUEUE_ST, *LPFRAME_QUEUE_ST;



/*��ʼ������*/

int initFrameData(LPFRAME_QUEUE_ST lq)
{
     lq->front=lq->rear = new FRAME_DATA_ST;//Ϊͷ�������ڴ�
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

//����һ��Ԫ�ص���β

int writeNode(LPFRAME_QUEUE_ST lq, int data)
{
     if (lq->currLenght == lq->totalLenght)  // ��������
     {
            //fprintf(stderr, "queue is full.\n");

           return false;
     }
     LPFRAME_DATA_ST (lq->rear)->next = new FRAME_DATA_ST;
//     node->data =  data;
//     node->next = NULL;
//     lq->rear = lq->rear->next = node; //����д��lq->rear->next = node, lq->rear = node;
     lq->rear=lq->rear->next;
     lq->rear->data=data;
     lq->rear->next=NULL;
     lq->currLenght++;
     return true;
}

//�Ӷ�ͷ��ȥһ��Ԫ��

int readFrameData(LPFRAME_QUEUE_ST lq, int *data)
{
      if (lq->front == lq->rear)  //�����ѿ�
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

/*�ݻ���������*/

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
    cout<<"��β�ǣ�"<<q->rear->data<<" �����ǣ�"<<q->front->data<<endl;
    DestoryFrameData(q);
}
