#include <stdio.h>

int main(void)
{
	char name[32] = { 0 };
	int age = 0;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d%*c", &age);	// %*c : ���๮�ڸ� ���������ٴ� �ǹ�

	printf("�̸��� �Է��ϼ��� : ");
	gets(name);

	printf("����� ���̴� %d���̰� �̸��� %s�Դϴ�.\n", age, name);
	return 0;
}