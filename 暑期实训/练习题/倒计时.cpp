#include<stdio.h>
#include<windows.h>
int main() {
	int a,i,b,j;
	printf("�����뵹��ʱ���ּ���");
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = b; i >= 0; i--) {
		printf("%d �� %d ��", a, i);
		Sleep(1000);
		system("cls");
	}
	for (i = a - 1; i >= 0; i--) {
		for (j = 59; j >= 0; j--) {
			printf("%d �� %d ��", i, j);
			Sleep(1000);
			system("cls");
		}
	}
	printf("����ʱ��������");
	printf("\a");
}
