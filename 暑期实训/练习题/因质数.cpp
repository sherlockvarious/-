#include<stdio.h>
#include<stdlib.h>
int main() {

	int a;
	int j;
	printf("please input a integer:");
	scanf("%d", &a);
	
	int i = 3;
	int flag = 0;
	for (j = 2; j < a / 2; j++) {
		if (a%j == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("该数是质数");
		return 0;	}
	flag = 0;
	printf("%d = ", a);
	while (a % 2 == 0) {
		a = a / 2;
		printf("2*");
	}
	while (a != 1) {
		
		for (j = 2; j < i / 2; j++) {
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			while (a%i == 0) {
				a = a / i;
				if (a == 1)
					printf("%d", i);
				else
					printf("%d*", i);
			}
		}
		i++;
	}
	system("pause");
}
