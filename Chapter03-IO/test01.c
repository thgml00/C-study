/*
getchar() 함수를 호출하여 사용자로부터 영문 4글자 이상을 입력
두 번째 글자만 화면에 출력
*/

#include <stdio.h>

int main(void)
{
	char ch1 = 0;
	char ch2 = 0;

	printf("입력 : ");
	ch1 = getchar();
	ch2 = getchar();

	printf("출력 : %c", ch2);
	return 0;
}