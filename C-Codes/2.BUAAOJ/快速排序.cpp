#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
int partition(int *data,int low,int high)

　　{
       int t = 0;

　　t = data[low];

　　while(low < high)

　　{ while(low < high && data[high] >= t)

　　high--;

　　data[low] = data[high];

　　while(low < high && data[low] <= t)

　　low++;

　　data[high] = data[low];

　　}

　　data[low] = t;

　　return low;

　　}

　　void sort(int *data,int low,int high) //快排每趟进行时的枢轴要重新确定，由此进 //一步确定每个待排小记录的low及high的值

　　{ if(low >= high)

　　return ;

　　int pivotloc = 0;

　　pivotloc = partition(data,low,high);

　　sort(data,low,pivotloc-1);

　　sort(data,pivotloc+1,high);

　　}
