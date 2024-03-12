#include <stdio.h>



int main()
{
	char ch; // 문자

	short sh; // 정수
	int i;
	long lo;

	float fl; // 실수
	double du;


	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);

	printf("char : %c , short : %d", ch, sh);


	return 0;
}