#include <iostream>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
    //test ctor
    cout<<"Test ctor:"<<endl;
    Student s1("feifei ",1996,02,01);
    s1.print();


    //test copy ctor
    cout<<"Test copy ctor:"<<endl;
    Student s2(s1);
    s2.print();


    //test get function
    cout<<"Test get function:"<<endl;
    cout<<"Get name: "<<s1.getName()<<endl;
    Date d;
    d=s1.getBirthDate();
    cout<<"Get birthDate: ";
    d.print();
    cout<<"\n";

    //test set function
    cout<<"Test set function:"<<endl;
    char *str2="jiajia";
    s1.setName(str2);
    s1.setBirthDate(1996,12,24);
    s1.print();
    cout<<"\n";

    //test static member
    cout<<"Test static member:"<<endl;
    cout<<"There are "<<s2.getCount()<<" students in total.\n";
    cout<<"\n";

    //test destructor
    cout<<"Test destructor:"<<endl;
}
