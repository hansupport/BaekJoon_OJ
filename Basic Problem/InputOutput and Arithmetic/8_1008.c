#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// �� ���� A�� B
	int A, B;

	// A�� B �Է�
	scanf("%d %d", &A, &B);

	// A/B ��� (�Ҽ� 15��° �ڸ�����)
	printf("%.15f", (double) A / B);

	return 0;
}