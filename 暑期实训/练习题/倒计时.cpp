#include<stdio.h>
#include<windows.h>
int main() {
	int a,i,b,j;
	printf("请输入倒计时几分几秒");
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = b; i >= 0; i--) {
		printf("%d 分 %d 秒", a, i);
		Sleep(1000);
		system("cls");
	}
	for (i = a - 1; i >= 0; i--) {
		for (j = 59; j >= 0; j--) {
			printf("%d 分 %d 秒", i, j);
			Sleep(1000);
			system("cls");
		}
	}
	printf("倒计时结束！！");
	printf("\a");
}
