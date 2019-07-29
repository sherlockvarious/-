#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[10];
	int i, j, temp;
	printf("请输入十个数\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < 10; i++) {
		for (j = 1 + i; j < 10; j++) {
			if (arr[j] > arr[i]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("从大到小排序为：");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
}