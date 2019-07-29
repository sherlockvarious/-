#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[100][8] = { 0 };
	int i = 0;
	int j, k, h;
	int max = 0, min = 10000;
	printf("请输入学号：\n");
	scanf("%d", &arr[i][0]);
	while (arr[i][0] != 0) {
		printf("请输入高数成绩：\n");
		scanf("%d", &arr[i][1]);
		printf("请输入计算机成绩：\n");
		scanf("%d", &arr[i][2]);
		printf("请输入英语成绩：\n");
		scanf("%d", &arr[i][3]);
		printf("请输入经济学成绩：\n");
		scanf("%d", &arr[i][4]);
		printf("请输入思修成绩：\n");
		scanf("%d", &arr[i][5]);

		i++;
		printf("请输入学号：\n");
		scanf("%d", &arr[i][0]);
	}
	printf("学号     高数    计算机    英语    经济学    思修     总分     平均分\n");
	k = i;
	i = 0;
	while (arr[i][0] != 0) {
		for (j = 1; j < 6; j++)
		{
			arr[i][6] += arr[i][j];
		}
		arr[i][7] = arr[i][6] / 5;
		for (j = 0; j < 8; j++) {
			printf("%d       ", arr[i][j]);
		}
		printf("\n");
		i++;
	}
	for (h = 1; h < 8; h++) {
		for (j = 0; j < k; j++) {
			if (arr[j][h] > max)
				max = arr[j][h];
			if (arr[j][h] < min)
				min = arr[j][h];
		}
		arr[k][h] = max;
		arr[k + 1][h] = min;
		max = 0;
		min = 10000;
	}
	printf("最大值：  ");
	for (j = 1; j < 8; j++) {
		printf("%d       ", arr[k][j]);
	}
	printf("\n最小值：  ");
	for (j = 1; j < 8; j++) {
		printf("%d       ", arr[k + 1][j]);
	}
	system("pause");
}