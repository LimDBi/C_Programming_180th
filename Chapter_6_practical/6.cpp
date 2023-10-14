/*문제 6. 다음은 x의 n제곱을 구해 반환하는 함수다.*/
// ~할 때까지 계속 곱하거나 나누거나 더하거나 빼려면 temp를 이용해야 함.
// 한 번 나눈 값에 또 곱하려면 한번 나눈 값을 저장할 변수(temp)가 있어야 함.
#include <stdio.h>
double power1(double x, int n) {
	int temp = 1.0;
	for (int i = 1; i <= n; i++) {
		temp *= x;
	}
	return temp;
}

double power2(double x, int n) {
	int temp = 1.0;
	while (n-- > 0) {
		temp *= x;
	}
	return temp;
}
int main() {
	double x = 5.0;
	int n = 4;
	int m = 3;
	printf("5의 4승: %f\n", power1(x, n));
	printf("5의 3승: %f\n", power2(x, m));
	return 0;
}