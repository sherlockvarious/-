#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	int j;
	int n;
	printf("请输入菱形的边长\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n-1; j >= i; j--)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) {
			if (j == 2 * i - 1)
				printf("*\n");
			else if (j == 1)
				printf("*");
			else
				printf(" ");

		}

	}
	for (i = n; i >= 1; i--) {
		for (j = n-1; j >= i; j--)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) {
			if (j == 2 * i - 1)
				printf("*\n");
			else if (j == 1)
				printf("*");
			else
				printf(" ");

		}
	}
	system("pause");
}