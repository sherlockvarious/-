#include<stdio.h>
#include<stdlib.h>
int isdivisor(int x,int n) {
	if (n%x == 0)
		return x;
	else
		return 0;
}
int main()
{
	int n,i;
	int sum = 0;
	scanf("%d", &n);
	for (i = 2; i < n; i++) {
		sum += isdivisor(i, n);
	}
	printf("%d", sum);
	system("pause");
}