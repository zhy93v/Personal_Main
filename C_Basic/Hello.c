#include <stdio.h>



int main()
{
	char ch; // ����

	short sh; // ����
	int i;
	long lo;

	float fl; // �Ǽ�
	double du;


	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);

	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);

	printf("char : %c , short : %d", ch, sh);


	return 0;
}