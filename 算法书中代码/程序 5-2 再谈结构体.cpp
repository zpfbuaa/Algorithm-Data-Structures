#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;
template <typename T>
struct Point
{
    T x,y,z;
    Point(T x=0,T y=0,T z=0){this->x=x;this->y=y;this->z=z;}
};

template <typename T>
Point<T>operator+(const Point<T>&A,const Point<T>&B)
{
    return Point<T>(A.x+B.x,A.y+B.y,A.z+B.z);
}

template <typename T>
ostream& operator<<(ostream &out,const Point<T>&p)
{
    out<<"("<<p.x<<","<<p.y<<","<<p.z<<")";
    return out;
}

int main()
{
   // Point<float> a(5.1238523,45895.21545,454815.218211),b(5.66215,595.3266,05.2154);
    double a=12345679;
    cout<<fixed<<setprecision(3)<<showpoint<<a*98.85<<endl;

}
