#include <stdio.h>

int main(void)
{
	int sec = 0;

	scanf("%d", &sec);
	int hour = sec / 3600;
	int min = (sec % 3600) / 60;
	int second = (sec % 3600) % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", sec, hour, min, second);
}