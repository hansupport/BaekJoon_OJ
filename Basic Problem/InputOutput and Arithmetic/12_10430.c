#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// �� ���� A, B, C (2 �� A, B, C �� 10000)
	int A, B, C;

	// A, B, C �Է�
	scanf("%d %d %d", &A, &B, &C);

	// (A+B)%C, ((A%C)+(B%C))%C, (A��B)%C, ((A%C)��(B%C))%C�� ���
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}