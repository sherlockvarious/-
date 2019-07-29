#include "stdio.h"
struct stuscore
{
	int  num;
	char name[10];
	float score;
} ss1 = { 1001, "ZhangSan", 78.5 }, *stup;
int main()
{
	stup = &ss1;		/* 将指向结构体变量的指针初始化 */
	/* 直接输出结构体变量的成员 */
	printf("%d   %s    %f\n", ss1.num, ss1.name, ss1.score);
	/* 使用指向结构体变量的指针的第一种写法输出结构体变量的成员 */
	printf("%d   %s    %f\n", (*stup).num,(*stup).name,(*stup).score);
	/* 使用指向结构体变量的指针的第二种写法输出结构体变量的成员 */
	printf("%d   %s    %f", stup->num,stup->name,stup->score);
	return 0;
}

