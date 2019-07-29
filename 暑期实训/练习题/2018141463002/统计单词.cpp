#include<stdio.h>
#include<stdlib.h>
int countnum(char *arr) {
	int i;
	int num = 1;
	for (i = 0; i < 900; i++) {
		if (arr[i] == ' ')
			num++;
	}
	return num;
}
int main() {
	char  arr[900];
	gets_s(arr);
	printf("%d", countnum(arr));
	system("pause");
}