#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// �� ���� A�� B
	int A, B;

	// A�� B �Է�
	scanf("%d %d", &A, &B);

	// A+B, A-B, A*B, A/B(��), A%B(������)�� ���
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}