#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// ���� ch, ���� �迭 x, �ݺ� ���� i, 
	char ch;
	char x[50];
	int i;
	int num = 0;

	// �迭 x�� index �Է�, ���๮�� �Է� �� �ݺ��� ��������
	for (i = 0; i < 50; i++) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		x[i] = ch;
		num++;
	}

	// �迭 x�� index ���, ??!���
	for (i = 0; i < num; i++)
		printf("%c", x[i]);
	printf("??!");

	return 0;
}