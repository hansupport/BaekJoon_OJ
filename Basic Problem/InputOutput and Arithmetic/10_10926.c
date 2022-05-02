#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 문자 ch, 문자 배열 x, 반복 변수 i, 
	char ch;
	char x[50];
	int i;
	int num = 0;

	// 배열 x의 index 입력, 개행문자 입력 시 반복문 빠져나감
	for (i = 0; i < 50; i++) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		x[i] = ch;
		num++;
	}

	// 배열 x의 index 출력, ??!출력
	for (i = 0; i < num; i++)
		printf("%c", x[i]);
	printf("??!");

	return 0;
}