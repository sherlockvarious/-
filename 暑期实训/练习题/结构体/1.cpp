
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
		printf("�������һ��ѧ����ѧ��\n");
		scanf("%d", &ss1.num);
		printf("�������һ��ѧ��������\n");
		scanf("%s", ss1.name);
		printf("�������һ��ѧ���ĳɼ�\n");
		scanf("%f", &ss1.score);


		printf("������ڶ���ѧ����ѧ��\n");
		scanf("%d", &ss2.num);
		printf("������ڶ���ѧ��������\n");
		scanf("%s", ss2.name);
		printf("������ڶ���ѧ���ĳɼ�\n");
		scanf("%f", &ss2.score);

		printf("�����������ѧ����ѧ��\n");
		scanf("%d", &ss3.num);
		printf("�����������ѧ��������\n");
		scanf("%s", ss3.name);
		printf("�����������ѧ���ĳɼ�\n");
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
		printf("ѧ��      ����       �ɼ�    \n");
		for (i = 0; i < 3; i++) {
			printf("%d         %s       %.2f\n", stu[i].num, stu[i].name, stu[i].score);
		}
	return 0;
}

