/*���� 7. ������ ��� ���޹��� x, y �� ū ���� ��ȯ�ϴ� �Լ���.*/
//�ָ�!! ��Ұ��踦 ���ϴ� ��� ����� �Լ��� �ۼ���!!
#include <stdio.h>
int max_ver1(int x, int y) {
	return x > y ? x : y;
}
int max_ver2(int x, int y) {
	if (x<y) {
		return y;
	}
	else {
		return x;
	}
}
int max_ver3(int x, int y) {
	int max;
	if (x < y) {
		max = y;
	}
	else {
		max = x;
	}
	return max;
}
int max_ver4(int x, int y) {
	int max = x;
	if (max<y) {
		max = y;
	}
	return max;
}
int main() {
	int x = 4;
	int y = 15;
	printf("max_ver1 = %d\n", max_ver1(x, y));
	printf("max_ver2 = %d\n", max_ver2(x, y));
	printf("max_ver3 = %d\n", max_ver3(x, y));
	printf("max_ver4 = %d\n", max_ver4(x, y));
	return 0;
}