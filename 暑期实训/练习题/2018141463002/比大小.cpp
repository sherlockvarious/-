#include<stdio.h>
#include<stdlib.h>
int whomax(int x, int y, int z) {
	if (z >= x && z >= y)
		return z;
	else if (y >= x && y >= z)
		return y;
	else
		return x;
}
int main()
{
	int a, b, c;
	printf("请输入三个整数");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", whomax(a,b,c));
	system("pause");
}