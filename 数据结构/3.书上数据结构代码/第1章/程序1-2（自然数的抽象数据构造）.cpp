//程序1-2自然数的抽象数据类型
ADT NaturalNumber IS
//objects:自然数是整数的有序子集合，它开始于0，结束于机器能表示的最大整数MAXINT
{
    function:对于所有的x,y属于NaturalNumber,+,-,<,==,=等都是可用的服务
    Zero():NaturalNumber//返回0
    IsZero(x):Boolean//if(x==0)return True, else return false
    Add(x,y):NaturalNumber//if(x+y<=MAXINT)return x+y, else return MAXINT
    Equal(x,y):Boolean//if(x==y)return 1, else return 0
    Successor(X):NaturalNumber//if(x==MAXINT)return x , else return x+1
    Subtract(x,y):NaturalNumber//if(x<y)return 0, else retutn x-y;
}//NaturalNumber
	
