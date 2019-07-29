#include "stdio.h"
int main()
{
	struct stuscore
	{
		int num;			/* 学号 */
		char name[20];		/* 姓名 */
		float score;		/* 课程成绩 */
	};
	struct stuscore stus[30];	/* 声明一个结构体数组变量 */
	struct stuscore t;			/* 声明一个结构体变量用于交换数据 */
	int i, j;
	printf("请输入学生信息。");
	for (i = 0; i < 30; i++)
	{
		/* 输入30个学生的基本信息*/
		printf("请输入第%d个学生的学号\n",i+1);
		scanf("%d", &stus[i].num);
		printf("请输入第%d个学生的名字\n",i+1);
		scanf("%s", stus[i].name);
		printf("请输入第%d个学生的成绩\n",i+1);
		scanf("%f", &stus[i].score);
	}
	/* 使用冒泡排序法对输入的30个学生信息按成绩由高到低排序 */
	for (i = 0; i < 30; i++) {
		for (j = i + 1; j < 30; j++) {
			if (stus[j].score > stus[i].score)
			{
				t = stus[i];
				stus[i] = stus[j];
				stus[j] = t;
			}
		}
	}

	/* 输出排序后的学生成绩信息 */
	printf("学号      姓名       成绩    \n");
	for (i = 0; i < 30; i++) {
		printf("%d         %s       %.2f\n", stus[i].num, stus[i].name, stus[i].score);
	}
	return 0;
}

