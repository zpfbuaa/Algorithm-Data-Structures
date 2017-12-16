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
#define MAX_SIZE 110
int a[MAX_SIZE];
using namespace std;

int main()
{
    for(int i=0;i<110;i++)
    {
        a[i]=109-i;
    }
    sort(a,a+110);
    for(int i=0;i<110;i++)
        cout<<a[i]<<" ";
}



















