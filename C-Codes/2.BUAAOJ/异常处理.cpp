#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <exception>
#include <stdexcept>

using namespace std;

//class dividedbyzero :public runtime_error
//{
//public:
//    dividedbyzero():runtime_error("Attempt to divide by zero!"){}
//};
//
//double quotient(int num1,int num2)
//{
//    if(num2==0)
//    throw dividedbyzero();
//    return static_cast<double>(num1)/num2;
//}
//
//int main()
//{
//    int num1,num2;
//    try{
//        while(~scanf("%d%d",&num1,&num2))
//        {
//            cout<<"ÎÒ°®Äã"<<endl;
//            double result;
//            result=quotient(num1,num2);
//            cout<<"the: "<<result<<endl;
//        }
//    }catch(dividedbyzero&dividedbyzero)
//    {
//        cout<<"Òì³£ÁË!!!"<<endl;
//        cout<<dividedbyzero.what()<<endl;
//    }
//}
int main()
{
    cout<<"A"<<endl;
    cout<<'A'<<endl;
    cout.put('A');
    cout<<endl;
    char A='A';cout<<A<<endl;
    putchar('A');
}
