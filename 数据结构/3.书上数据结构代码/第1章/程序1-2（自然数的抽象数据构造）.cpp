//����1-2��Ȼ���ĳ�����������
ADT NaturalNumber IS
//objects:��Ȼ���������������Ӽ��ϣ�����ʼ��0�������ڻ����ܱ�ʾ���������MAXINT
{
    function:�������е�x,y����NaturalNumber,+,-,<,==,=�ȶ��ǿ��õķ���
    Zero():NaturalNumber//����0
    IsZero(x):Boolean//if(x==0)return True, else return false
    Add(x,y):NaturalNumber//if(x+y<=MAXINT)return x+y, else return MAXINT
    Equal(x,y):Boolean//if(x==y)return 1, else return 0
    Successor(X):NaturalNumber//if(x==MAXINT)return x , else return x+1
    Subtract(x,y):NaturalNumber//if(x<y)return 0, else retutn x-y;
}//NaturalNumber
	
