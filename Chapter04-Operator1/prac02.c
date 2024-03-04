#include <stdio.h>

int main(void)
{
	int sec = 0;

	scanf("%d", &sec);
	int hour = sec / 3600;
	int min = (sec % 3600) / 60;
	int second = (sec % 3600) % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", sec, hour, min, second);
}