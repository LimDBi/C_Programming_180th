/*���� 6. ������ x�� n������ ���� ��ȯ�ϴ� �Լ���.*/
// ~�� ������ ��� ���ϰų� �����ų� ���ϰų� ������ temp�� �̿��ؾ� ��.
// �� �� ���� ���� �� ���Ϸ��� �ѹ� ���� ���� ������ ����(temp)�� �־�� ��.
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
	printf("5�� 4��: %f\n", power1(x, n));
	printf("5�� 3��: %f\n", power2(x, m));
	return 0;
}