#include <stdio.h>

int main(void)
{
	char name[32] = { 0 };
	int age = 0;

	printf("나이를 입력하세요 : ");
	scanf("%d%*c", &age);	// %*c : 개행문자를 꺼내버린다는 의미

	printf("이름을 입력하세요 : ");
	gets(name);

	printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", age, name);
	return 0;
}