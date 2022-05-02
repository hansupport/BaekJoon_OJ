#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 두 정수 A와 B
	int A, B;

	// A와 B 입력
	scanf("%d %d", &A, &B);

	// A/B 출력 (소수 15번째 자리까지)
	printf("%.15f", (double) A / B);

	return 0;
}