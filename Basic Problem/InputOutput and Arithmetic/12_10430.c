#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 세 정수 A, B, C (2 ≤ A, B, C ≤ 10000)
	int A, B, C;

	// A, B, C 입력
	scanf("%d %d %d", &A, &B, &C);

	// (A+B)%C, ((A%C)+(B%C))%C, (A×B)%C, ((A%C)×(B%C))%C를 출력
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}