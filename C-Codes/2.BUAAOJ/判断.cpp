#include <iostream>
#include <cstring>

using namespace std;
#include <iostream>
using namespace std;
class B0// ����Ϊ����B0
{
    int nv;//Ĭ��Ϊ˽�г�Ա
public://�ⲿ�ӿ�
    B0(int n){ nv = n; cout << "Member of B0" << endl; }//B0��Ĺ��캯��
    void fun(){ cout << "fun of B0" << endl; }
};
class B1 :virtual public B0
{
    int nv1;
public:
    B1(int a) :B0(a){ cout << "Member of B1" << endl; }
};
class B2 :virtual public B0
{
    int nv2;
public:
    B2(int a) :B0(a){ cout << "Member of B2" << endl; }
};
class D1 :public B1, public B2
{
    int nvd;
public:
    D1(int a) :B0(a), B1(a), B2(a){ cout << "Member of D1" << endl; }// ���еĺ��壬�ο��±ߵ� ��ʹ��ע��5��
    void fund(){ cout << "fun of D0" << endl; }
};
int main(void)
{
    D1 d1(1);
    d1.fund();
    d1.fun();
    return 0;
}
