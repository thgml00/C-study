#include <stdio.h>

int main(void)
{
	int input1 = 0;
	int input2 = 0;

	printf("�� ������ �Է��ϼ���. : ");
	scanf("%d %d", &input1, &input2);

	printf("AVG : %.2f", (input1 + input2) / 2.0);
}