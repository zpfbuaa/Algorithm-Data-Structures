#include <iostream>
using std::cout;
using std::endl;
int main(){
	int b=10;
	int * const p1=&b;
	const int abc=10;
	//p1=&abc; //A ±àÒë´íÎó
	//p1=const_cast<int*> (&abc); //B
	
	cout<<"b="<<b
		<<"\n*p1="<<*p1<<endl;
	return 0;
}

