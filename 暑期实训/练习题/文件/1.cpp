#include<stdio.h>
#include<stdlib.h>
#include<string>
struct student {
	int num;
	char name[20];
	float score;
	student *next;
};
int main() {

	FILE  *fp;
	FILE  *fp1;
	student stu[50];
	int i = 0;
	int j, k;
	int num;
	char name[20];
	float score;
	int up = 0, down = 0;
	int sum = 0;
	if ((fp = fopen("scorein.dat", "rb")) == NULL) {
		printf("�ļ���ʧ�ܣ���\n");
		return 0;
	}
	rewind(fp);
	while (!feof(fp))
	{
		fscanf(fp, "%d  %s  %f", &stu[i].num, stu[i].name, &stu[i].score);//��������ѭ������������п�����fscanf��ȡ����ʧ�ܣ������ļ�ָ�벻�ƶ�
		i++;
	}
	fclose(fp);
	for (j = 0; j < i; j++) {
		for (k = j + 1; k < i; k++) {
			if (stu[k].score > stu[j].score)
			{
				student temp = stu[k];
				stu[k] = stu[j];
				stu[j] = temp;
			}
		}
	}
	printf("\n\n���ɼ��������\n");
	for (j = 0; j < i; j++) {
		printf("%d  %s  %.1f\n", stu[j].num, stu[j].name, stu[j].score);
		sum += stu[j].score;
	}
	float ave = sum / i;
	for (j = 0; j < i; j++) {
		if (stu[j].score >= ave)
			up++;
		else
			down++;
	}
	if ((fp1 = fopen("scoreout.dat", "wb")) == NULL) {
		printf("�ļ���ʧ�ܣ���\n");
		return 0;
	}
	fprintf(fp, "ƽ���ɼ���%f   ����ƽ���ɼ����ˣ�%d   ����ƽ���ɼ����ˣ�%d", ave, up, down);//��������ѭ������������п�����fscanf��ȡ����ʧ�ܣ������ļ�ָ�벻�ƶ�
}