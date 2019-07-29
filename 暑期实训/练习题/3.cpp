#include "stdio.h"
struct stuscore
{
	int  num;			/* ѧ�� */
	char name[20];		/* ���� */
	float score;		/* �γ̳ɼ� */
};
struct stuscore stus[30]; /* ����һ���ṹ���������Ϊȫ�ֱ��� */
struct stuscore input(); /* ����ѧ���ɼ���Ϣ��������������ֵΪ�ṹ���� */
void display(struct stuscore stud[], int count);  /* ��ʾѧ����Ϣ���� */
void sort(struct stuscore stud[], int count);     /* ѧ���ɼ������� */
void insert(struct stuscore stud[], int count);    /* ���뺯�� */
void del(struct stuscore stud[], int count);       /* ɾ������ */

int main()
{
	int i, count;
	char ch;
	printf("������ѧ���ɼ���Ϣ��");
	for (i = 0; i < 20; i++)
	{
		stus[i] = input();                        /* ����¼����Ϣ���� */
	}
	count = 20;
	printf("\n���ɼ�����ǰ��ѧ���ɼ���Ϣ���£�");
	display(stus, count);                          /* ������ʾ��Ϣ���� */
	sort(stus, count);                             /* ���������� */
	printf("\n���ɼ�������ѧ���ɼ���Ϣ���£�");
	display(stus, count);
	printf("\n\n�Ƿ�ȷ�ϲ�����ѧ����Ϣ?(y or n)");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		insert(stus, count);			/* ���ò�����Ϣ���� */
		count++;
		printf("\n������ѧ����Ϣ���ѧ���ɼ���Ϣ���£�");
		display(stus, count);
	}
	printf("\n\n�Ƿ�Ҫɾ��ĳ��ѧ��?(y or n)");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		del(stus, count);				/* ����ɾ����Ϣ���� */
		count--;
		printf("\nɾ����ѧ���ɼ���Ϣ���£�");
		display(stus, count);
	}
	return 0;
}

struct stuscore input()				/* ¼��ѧ���ɼ���Ϣ���� */
{
	stuscore temp;
	printf("��������һλѧ����Ϣ\n");
	scanf("%d", &temp.num);
	scanf("%s", temp.name);
	scanf("%f", &temp.score);
	return temp;
}

/* ��ʾѧ���ɼ���Ϣ���� */
void display(struct stuscore stud[], int count)
{
	int i;
	printf("ѧ��      ����       �ɼ�    \n");
	for (i = 0; i < count; i++) {
		printf("%d         %s       %.2f\n", stus[i].num, stus[i].name, stus[i].score);
	}
}

void sort(struct stuscore stud[], int count)		/* ������ */
{
	/*  ð������ */
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

void insert(struct stuscore stud[], int count)		/* ���뺯�� */
{
	/* ����һ��ѧ������Ϣ��Ҫ�������ѧ����Ϣ��Ȼ���� */
	int i, j;
	stuscore t;

	printf("����������ѧ����Ϣ\n");
	scanf("%d", &stud[count].num);
	scanf("%s", stud[count].name);
	scanf("%f", &stud[count].score);
	
	sort(stus, count+1);
}

void del(struct stuscore stud[], int count)			/* ɾ������ */
{
	int i;
	int num;
	printf("������Ҫɾ��ѧ����ѧ��\n");
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
