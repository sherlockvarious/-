
#include "stdio.h"
int main()
{
	struct stuscore
	{
		int num = 0;
		char name[20];
		float score;
	} ss1, ss2, ss3, temp;
	int i,j;
	/*   Add your code*/\
		printf("请输入第一个学生的学号\n");
		scanf("%d", &ss1.num);
		printf("请输入第一个学生的名字\n");
		scanf("%s", ss1.name);
		printf("请输入第一个学生的成绩\n");
		scanf("%f", &ss1.score);


		printf("请输入第二个学生的学号\n");
		scanf("%d", &ss2.num);
		printf("请输入第二个学生的名字\n");
		scanf("%s", ss2.name);
		printf("请输入第二个学生的成绩\n");
		scanf("%f", &ss2.score);

		printf("请输入第三个学生的学号\n");
		scanf("%d", &ss3.num);
		printf("请输入第三个学生的名字\n");
		scanf("%s", ss3.name);
		printf("请输入第三个学生的成绩\n");
		scanf("%f", &ss3.score);

		stuscore stu[3];
		stu[0] = ss1;
		stu[1] = ss2;
		stu[2] = ss3;
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 3; j++) {
				if (stu[j].score > stu[i].score)
				{
					temp = stu[i];
					stu[i] = stu[j];
					stu[j] = temp;
				}
			}
		}
		printf("学号      姓名       成绩    \n");
		for (i = 0; i < 3; i++) {
			printf("%d         %s       %.2f\n", stu[i].num, stu[i].name, stu[i].score);
		}
	return 0;
}

