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
#define MAX_SIZE 1000010

using namespace std;
int arrs[MAX_SIZE] ;
int * tempArr = new int[MAX_SIZE];

void mergeArray(int * arrs, int * tempArr, int left, int middle, int right)
{
    int i = left, j = middle ;
    int m = middle + 1, n = right;
    int k = 0;

    while(i <= j && m <= n)
    {
        if(arrs[i] <= arrs[m])
            tempArr[k++] = arrs[i++];
        else
            tempArr[k++] = arrs[m++];
    }
    while(i <= j)
        tempArr[k++] = arrs[i++];
    while(m <= n)
        tempArr[k++] = arrs[m++];

    for(i=0; i < k; i++)
        arrs[left + i] = tempArr[i];
}

void mergeSort(int * arrs, int * tempArr, int left, int right)
{
    if(left < right)
    {
        int middle = (left + right)/2;
        mergeSort(arrs, tempArr, left, middle);
        mergeSort(arrs, tempArr, middle + 1, right);
        mergeArray(arrs, tempArr, left, middle, right);
    }
}

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
            scanf("%d",&arrs[i]);
        mergeSort(arrs, tempArr, 0, n-1);
        for (int i = 0; i < n; i++)
            printf("%d ",arrs[i]);
        printf("\n");
    }
}
