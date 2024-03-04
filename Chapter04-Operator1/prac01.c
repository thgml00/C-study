#include <stdio.h>

int main(void)
{
	int input1 = 0;
	int input2 = 0;

	printf("두 정수를 입력하세요. : ");
	scanf("%d %d", &input1, &input2);

	printf("AVG : %.2f", (input1 + input2) / 2.0);
}