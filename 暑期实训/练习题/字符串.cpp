#include<stdio.h>
#include<stdlib.h>
int main() {
	char arr[900];
	char brr[900];
	int i, k;
	printf("�������һ���ַ�����\n");
	gets_s(arr);
	printf("������ڶ����ַ�����\n");
	gets_s(brr);
	for (i = 0; i < 100; i++) {
		if (arr[i] == '\0') {
			k = i;
			break;
		}
	}
	do {
		arr[i] = brr[i - k];
		i++;
	} while (brr[i - k] != '\0');
	arr[i] = '\0';
	printf("%s", arr);
	system("pause");
}