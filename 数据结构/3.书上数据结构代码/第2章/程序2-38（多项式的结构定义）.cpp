//����2-38������ʽ�Ľṹ���壩

typedef struct Term//����ʽ�Ľṹ����
{
	float coef;//ϵ��
	int exp;//ָ��
	struct Term *link;//����ָ��
}*Polynomial;//һԪ����ʽ�Ķ���
