/*
getchar() �Լ��� ȣ���Ͽ� ����ڷκ��� ���� 4���� �̻��� �Է�
�� ��° ���ڸ� ȭ�鿡 ���
*/

#include <stdio.h>

int main(void)
{
	char ch1 = 0;
	char ch2 = 0;

	printf("�Է� : ");
	ch1 = getchar();
	ch2 = getchar();

	printf("��� : %c", ch2);
	return 0;
}