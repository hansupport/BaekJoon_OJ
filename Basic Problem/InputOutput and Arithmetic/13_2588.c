#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// �� �� �ڸ� �ڿ��� A�� B
	int A, B;

	// A�� B �Է�
	scanf("%d %d", &A, &B);

	// A*B ���
	printf("%d\n", A * (B % 10));
	printf("%d\n", A * (B / 10 % 10));
	printf("%d\n", A * (B / 100));
	printf("%d\n", A * B);

	return 0;
}