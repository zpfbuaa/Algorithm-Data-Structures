//#include <iostream>
//
//using namespace std;
//
//struct Point
//{
//    int x,y;
//    Point(int x=0,int y=0){this->x=x;this->y=y;}
//};
//
//Point operator+(const Point&A,const Point&B)
//{
//    return Point(A.x+B.x,A.y+B.y);
//}
//
//ostream &operator<<(ostream&out,const Point&p)
//{
//    out<<"("<<p.x<<","<<p.y<<")";
//    return out;
//}
//
//int main()
//{
//    Point a(22,5),b(1,2);
//    cout<<a+b<<endl;
//}
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


struct Point2
{
    int x,y,z;
    Point2(int x=0,int y=0,int z=0):x(x),y(y),z(z){}
};

Point2 operator+(const Point2&A,const Point2&B)
{
    return Point2(A.x+B.x, A.y+B.y, A.z+B.z);
}

ostream& operator<<(ostream&out,const Point2&p)
{
    out<<"("<<p.x<<","<<p.y<<","<<p.z<<")";
    return out;
}

int main()
{
    Point2 a(1),b(2,2);
    cout<<a+b<<endl;
}
