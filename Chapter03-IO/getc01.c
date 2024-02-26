#include <stdio.h>

int main(void)
{
	FILE *fp = stdin;
	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);

//	getchar();	// enter를 없애는 방법
				// enter를 버퍼에서 없애 가져오기 때문에 gets_s를 바로 사용할 수 있음
				// 빈 칸을 넣으면 문제
				// enter만 남아있게 돼 szName 입력 불가 됨

//	fflush(stdin);	// 입력 버퍼를 모두 fflush
					// 리셋하고 입력 받음
					// window에서만 가능

	char szName[12] = { 0 };
	printf("이름을 입력하세요 : ");
	gets_s(szName, sizeof(szName));	// getchar가 없다면 enter가 있어 즉시 반환 됨, szName을 입력할 수 없음

	printf("%d, %s\n", nAge, szName);

	return 0;
}