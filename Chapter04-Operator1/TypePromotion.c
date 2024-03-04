#include <stdio.h>

int main(void)
{
	char ch = 'A';

	printf("%c\n", ch + 1);	// B
	printf("%c\n", ch + 2);	// C

	printf("%d\n", ch + 1);	// 66
	printf("%d\n", ch + 2);	// 67

	printf("%d\n", 5.0 + 1);	// 0
	printf("%f\n", 5.0 + 2);	// 7.000000

	return 0;
}