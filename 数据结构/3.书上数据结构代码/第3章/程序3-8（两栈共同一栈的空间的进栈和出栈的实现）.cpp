//����3-8����ջ��ͬһջ�Ŀռ�Ľ�ջ�ͳ�ջ��ʵ�֣�
int push(DualStack &DS,SElemType x,int d)
{
	if(DS.t[0]+1==DS.t[1]||d!=0&&d!=1)return 0;
	if(d==0)DS.t[0]++;
	else DS.t[1]--;
	DS.Vector[DS.t[d]]=x;
	return 1;
};

int Pop(DualStack &DS,SElemType &x,int d)
{
	if(d!=0&&d!=1||DA.t[d]==DS.b[d])return 0;
	x=DS.Vector[DS.t[d]];
	if(d==0)DS.t[0]--;
	else DS.t[1]++;
	return 1;
}
