#include "stdio.h"
struct stuscore
{
	int  num;
	char name[10];
	float score;
} ss1 = { 1001, "ZhangSan", 78.5 }, *stup;
int main()
{
	stup = &ss1;		/* ��ָ��ṹ�������ָ���ʼ�� */
	/* ֱ������ṹ������ĳ�Ա */
	printf("%d   %s    %f\n", ss1.num, ss1.name, ss1.score);
	/* ʹ��ָ��ṹ�������ָ��ĵ�һ��д������ṹ������ĳ�Ա */
	printf("%d   %s    %f\n", (*stup).num,(*stup).name,(*stup).score);
	/* ʹ��ָ��ṹ�������ָ��ĵڶ���д������ṹ������ĳ�Ա */
	printf("%d   %s    %f", stup->num,stup->name,stup->score);
	return 0;
}

