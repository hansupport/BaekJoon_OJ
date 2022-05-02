#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 두 정수 A와 B
	int A, B;

	// A와 B 입력
	scanf("%d %d", &A, &B);

	// A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}