//����2-36��˫�������ɾ���㷨��
int Remove(DblList &first,int i,DataType &x,int d)//�ڴ�ͷ����˫�������а���d��ָ�ķ���ɾ����i�����
												  //��ɾԪ�ص�ֵͨ�������Ͳ���x
{
	DblNode *p=Locate(first,i,d);//����d��ָ����λ�ڵ�i�����
	if(p==NULL)return 0;//�ձ��i������ɾ��ʧ��
	p->rlink->llink=p->llink;//��llink����ժ��
	p->llink->rlink=p->rlink;//��rlink����ժ��
	x=p->data; delete p;//ɾ��
	return 1;//ɾ���ɹ���������1
}
