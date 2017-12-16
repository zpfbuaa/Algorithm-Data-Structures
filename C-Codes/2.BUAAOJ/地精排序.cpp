#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
template<class T>
void gnome_sort_1(T data[], int n, bool comparator(T, T))
{
    int i = 1;
    while (i < n)
    {
       if (i > 0 && comparator(data[i], data[i-1]))
       {
           swap(data[i], data[i-1]);
           i--;
       }else
       {
           i++;
       }
    }
}
