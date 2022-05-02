#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 두 세 자리 자연수 A와 B
	int A, B;

	// A와 B 입력
	scanf("%d %d", &A, &B);

	// 첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력
	printf("%d\n", A * (B % 10));
	printf("%d\n", A * (B / 10 % 10));
	printf("%d\n", A * (B / 100));
	printf("%d\n", A * B);

	return 0;
}