#include<stdio.h>
#include<stdlib.h>
int fibonacci(int x) {
	if (x == 1 || x == 2)
		return 1;
	else
		return  fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
	int sum = 0;
	for (int i = 1; i < 21; i++) {
		sum += fibonacci(i);
	}
	printf("쳲���������ǰ20��ĺ�Ϊ��%d", sum);
	system("pause");
}
