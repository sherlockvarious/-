#include<stdio.h>
int main() {
	int i;
	int j;
	for (i = 1; i <= 7; i++) {
		for (j = 6; j >= i; j--)
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
	for (i = 7; i >= 1; i--) {
		for (j = 6; j >= i; j--)
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
}