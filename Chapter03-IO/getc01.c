#include <stdio.h>

int main(void)
{
	FILE *fp = stdin;
	int nAge = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

//	getchar();	// enter�� ���ִ� ���
				// enter�� ���ۿ��� ���� �������� ������ gets_s�� �ٷ� ����� �� ����
				// �� ĭ�� ������ ����
				// enter�� �����ְ� �� szName �Է� �Ұ� ��

//	fflush(stdin);	// �Է� ���۸� ��� fflush
					// �����ϰ� �Է� ����
					// window������ ����

	char szName[12] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(szName, sizeof(szName));	// getchar�� ���ٸ� enter�� �־� ��� ��ȯ ��, szName�� �Է��� �� ����

	printf("%d, %s\n", nAge, szName);

	return 0;
}