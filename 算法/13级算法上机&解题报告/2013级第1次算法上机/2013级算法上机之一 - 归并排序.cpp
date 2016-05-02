//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <queue>
//#include <map>
//#include <set>
//#include <stack>
//#include <iomanip>
//#include <algorithm>
//#include <vector>
//#include <sstream>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
////---------快排-----------/
//
////int part(int array[],int low,int high)
////{
////    int flag=array[low];
////    while(low<high)
////    {
////        while(low<high&&array[high]>=flag)
////        {
////            high--;
////        }
////        while(low<high&&array[low]<=flag)
////        {
////            low++
////        }
////        swap(&array[low],&array[high]);
////        return low;
////    }
////}
////
////void quicksort(int array[],int low,int high)
////{
////    if(low<high)
////    {
////        int n=part(array,low,high)
////        quicksort(array,low,n);
////        quicksort(array,n+1,high);
////    }
////}
//
////------------归并排序----------
//
//void Merge(int array[],int start,int mid,int end)
//{
//    int temp1[10],temp2[10];
//    int n1,n2;
//    n1=mid-start+1;
//    n2=end-mid;
//    for(int i=0;i<n1;i++)
//    {
//        temp[i]=array[start+i];
//    }
//    for(int i=0;i<n1;i++)
//    {
//        temp2[i]=array[mid+i+1];
//    }
//    temp[n1]=temp2[n2]=100010;
//    for(int k=start,i=0,j=0;k<=end;k++)
//    {
//        if(temp1[i]<=temp2[i])
//        {
//            array[k]=temp1[i];
//            i++;
//        }
//        else
//        {
//            array[k]=temp2[j];
//            j++;
//        }
//    }
//}
//
//void Mergesort(int array[],int start,int end)
//{
//    if(start<end)
//    {
//        int i;
//        i=(end+start)/2;
//        Mergesort(array,start,i);
//        Mergesort(array,i+1,end);
//        Merge(array,start,i,end);
//    }
//}
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>

#define N 100
using namespace std;
typedef int DataType;
//合并data1[begin...mid]和data1[mid+1.end]到data2[begin,end]中,然后复制到data1[begin,end]中
void merge(DataType *data1,DataType *data2,int begin,int mid,int end)
{
 int i,j,k;
 for(i = begin,j=mid+1,k = begin;i<=mid&&j<=end;k++)
 {
  if(data1[i]<=data1[j])
   data2[k] = data1[i++];
  else
   data2[k] = data1[j++];
 }
 if(i<=mid)
  while(i<=mid)
   data2[k++] = data1[i++];
 else
  while(j<=end)
   data2[k++] = data1[j++];
 for(i=begin;i<=end;i++)
  data1[i] = data2[i];
}
//归并排序
void Msort(DataType *data1,DataType *data2,int begin,int end)
{
 if(begin==end)
  data1[begin] = data1[begin];
 else
 {
  int mid = (begin+end)/2;
  Msort(data1,data2,begin,mid);
  Msort(data1,data2,mid+1,end);
  merge(data1,data2,begin,mid,end);
 }
}

int _tmain(int argc, _TCHAR* argv[])
{
 //data1存储原数据和排序后的数据，data2为辅助数据
 DataType data1[N],data2[N];
 int cases;
 cout<<"请输入案例个数：";
 cin>>cases;
 while(cases--)
 {
  int n;
  cout<<"请输入元素个数：";
  cin>>n;
  int i;
  cout<<"请输入待排序元素："<<endl;
  for(i=1;i<=n;i++)
   cin>>data1[i];
  cout<<"归并排序前："<<endl;
  for(i=1;i<=n;i++)
   cout<<data1[i]<<" ";
  cout<<endl;
  Msort(data1,data2,1,n);
  cout<<"归并排序后："<<endl;
  for(i=1;i<=n;i++)
   cout<<data1[i]<<" ";
  cout<<endl;
 }
 system("pause");
 return 0;
}
//--------------------------------------
