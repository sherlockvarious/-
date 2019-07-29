#include "stdio.h"
struct stuscore
{
	int  num;			/* 学号 */
	char name[20];		/* 姓名 */
	float score;		/* 课程成绩 */
};
struct stuscore stus[30]; /* 声明一个结构数组变量，为全局变量 */
struct stuscore input(); /* 输入学生成绩信息函数，函数返回值为结构变量 */
void display(struct stuscore stud[], int count);  /* 显示学生信息函数 */
void sort(struct stuscore stud[], int count);     /* 学生成绩排序函数 */
void insert(struct stuscore stud[], int count);    /* 插入函数 */
void del(struct stuscore stud[], int count);       /* 删除函数 */

int main()
{
	int i, count;
	char ch;
	printf("请输入学生成绩信息。");
	for (i = 0; i < 20; i++)
	{
		stus[i] = input();                        /* 调用录入信息函数 */
	}
	count = 20;
	printf("\n按成绩排序前的学生成绩信息如下：");
	display(stus, count);                          /* 调用显示信息函数 */
	sort(stus, count);                             /* 调用排序函数 */
	printf("\n按成绩排序后的学生成绩信息如下：");
	display(stus, count);
	printf("\n\n是否确认插入新学生信息?(y or n)");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		insert(stus, count);			/* 调用插入信息函数 */
		count++;
		printf("\n插入新学生信息后的学生成绩信息如下：");
		display(stus, count);
	}
	printf("\n\n是否要删除某个学生?(y or n)");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		del(stus, count);				/* 调用删除信息函数 */
		count--;
		printf("\n删除后学生成绩信息如下：");
		display(stus, count);
	}
	return 0;
}

struct stuscore input()				/* 录入学生成绩信息函数 */
{
	stuscore temp;
	printf("请输入下一位学生信息\n");
	scanf("%d", &temp.num);
	scanf("%s", temp.name);
	scanf("%f", &temp.score);
	return temp;
}

/* 显示学生成绩信息函数 */
void display(struct stuscore stud[], int count)
{
	int i;
	printf("学号      姓名       成绩    \n");
	for (i = 0; i < count; i++) {
		printf("%d         %s       %.2f\n", stus[i].num, stus[i].name, stus[i].score);
	}
}

void sort(struct stuscore stud[], int count)		/* 排序函数 */
{
	/*  冒泡排序法 */
	int i, j;
	stuscore t;
	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if (stus[j].score > stus[i].score)
			{
				t = stus[i];
				stus[i] = stus[j];
				stus[j] = t;
			}
		}
	}
}

void insert(struct stuscore stud[], int count)		/* 插入函数 */
{
	/* 插入一个学生的信息，要求插入后的学生信息依然有序 */
	int i, j;
	stuscore t;

	printf("请输入插入的学生信息\n");
	scanf("%d", &stud[count].num);
	scanf("%s", stud[count].name);
	scanf("%f", &stud[count].score);
	
	sort(stus, count+1);
}

void del(struct stuscore stud[], int count)			/* 删除函数 */
{
	int i;
	int num;
	printf("请输入要删除学生的学号\n");
	scanf("%d", &num);
	for (i = 0; i < count; i++) {
		if (stud[i].num == num) {
			for (; i < count-1; i++) {
				stud[i] = stud[i + 1];
			}
			return;
		}
	}
}
