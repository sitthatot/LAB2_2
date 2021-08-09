#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b) {
	int min = a < b ? a : b;
	for (int i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

int main() {
	int a;
	int b;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	printf("Greatest common divisor = %d", gcd(a, b));
	return 0;
}