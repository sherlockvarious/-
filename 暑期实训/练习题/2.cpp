#include "stdio.h"
int main()
{
	struct stuscore
	{
		int num;			/* ѧ�� */
		char name[20];		/* ���� */
		float score;		/* �γ̳ɼ� */
	};
	struct stuscore stus[30];	/* ����һ���ṹ��������� */
	struct stuscore t;			/* ����һ���ṹ��������ڽ������� */
	int i, j;
	printf("������ѧ����Ϣ��");
	for (i = 0; i < 30; i++)
	{
		/* ����30��ѧ���Ļ�����Ϣ*/
		printf("�������%d��ѧ����ѧ��\n",i+1);
		scanf("%d", &stus[i].num);
		printf("�������%d��ѧ��������\n",i+1);
		scanf("%s", stus[i].name);
		printf("�������%d��ѧ���ĳɼ�\n",i+1);
		scanf("%f", &stus[i].score);
	}
	/* ʹ��ð�����򷨶������30��ѧ����Ϣ���ɼ��ɸߵ������� */
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

	/* ���������ѧ���ɼ���Ϣ */
	printf("ѧ��      ����       �ɼ�    \n");
	for (i = 0; i < 30; i++) {
		printf("%d         %s       %.2f\n", stus[i].num, stus[i].name, stus[i].score);
	}
	return 0;
}

