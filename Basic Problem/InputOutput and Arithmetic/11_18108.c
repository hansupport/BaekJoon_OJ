#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	// 정수 y (1000 ≤ y ≤ 3000)
	int y;

	// y 입력
	scanf("%d", &y);

	// 불기 연도를 서기 연도로 변환한 결과 출력
	printf("%d", y - 543);

	return 0;
}