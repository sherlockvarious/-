#include<stdio.h>
#include<stdlib.h>
#include<string>


//Bob male sichuan 27@163.com 18465987545

struct student {
	char name[20];
	char sex[10];
	char phonenum[20];
	char address[20];
	char email[20];
};
void increase(student *stu,int *i){
	printf("������ѧ������\n");
	scanf("%s", stu[*i].name);
	printf("������ѧ���Ա�\n");
	scanf("%s", stu[*i].sex);
	printf("������ѧ����ַ\n");
	scanf("%s", stu[*i].address);
	printf("������ѧ������\n");
	scanf("%s", stu[*i].email);
	printf("������ѧ���绰����\n");
	scanf("%s", stu[*i].phonenum);
	(*i)++;
	
}
void search(student *stu, int *i) {
	char name[20];
	int j;
	printf("��������Ҫ���ҵ�ѧ��������\n");
	scanf("%s", name);
	for (j = 0; j < *i; j++) {
		if (strcmp(name, stu[j].name) == 0)
		{
			printf("������%s\n�Ա�%s\n��ַ��%s\n�绰���룺%s\n���䣺%s\n", stu[j].name, stu[j].sex, stu[j].address, stu[j].phonenum, stu[j].email);
			return;
		}
	}
	printf("���޴��ˣ�����\n");
	return;
}
void deletestu(student *stu, int *i) {
	char name[20];
	int j,k;
	printf("��������Ҫ���ҵ�ѧ��������\n");
	scanf("%s", name);
		for (j = 0; j < *i; j++) {
			if (strcmp(name, stu[j].name) == 0)
			{
				if (j == (*i) - 1) {
					(*i)--;
					printf("ɾ���ɹ�������\n");
					return;
				}
				else {
					for (k = j; k < *i - 1; k++)
						stu[k] = stu[k + 1];
					printf("ɾ���ɹ�������\n");
					(*i)--;
					return;
				}
			}
		}
		
	printf("���޴��ˣ�����\n");
	return;
}
void modifierstu(student *stu, int *i) {
	char name[20];
	int j;
	printf("��������Ҫ���ҵ�ѧ��������\n");
	scanf("%s", name);
	for (j = 0; j < *i; j++) {
		if (strcmp(name, stu[j].name) == 0)
		{
			printf("������ѧ������\n");
			scanf("%s", stu[j].name);
			printf("������ѧ���Ա�\n");
			scanf("%s", stu[j].sex);
			printf("������ѧ����ַ\n");
			scanf("%s", stu[j].address);
			printf("������ѧ������\n");
			scanf("%s", stu[j].email);
			printf("������ѧ���绰����\n");
			scanf("%s", stu[j].phonenum);
			return;
		}
	}
	printf("���޴��ˣ�����\n");
	return;
}
void showinfo(student *stu, int *i) {
	int j;
	printf("����    �Ա�      ��ַ         ����           ����\n");
	for(j=0;j<*i;j++)
		printf("%s     %s     %s     %s      %s\n", stu[j].name, stu[j].sex, stu[j].address, stu[j].phonenum, stu[j].email);
	return;
}
int menu() {
	puts("\n\ninput 1 to Student imformation sheet");
	puts("input 2 to Increase student records");
	puts("input 3 to search student records");
	puts("input 4 to delete student records");
	puts("input 5 to modifier student records");
	puts("input 6 to exit program");
	int a;
	scanf("%d", &a);
	return a;
}
int main() {
	FILE *fp;
	student stu[100];
	int choice;
	int i = 0;
	int j;
	if ((fp = fopen("student.dat", "rb+")) == NULL) {
		printf("�ļ���ʧ�ܣ�����\n");
		return 0;
	}
	rewind(fp);
		while (!feof(fp))
		{
			fscanf(fp, "%s %s %s %s %s ", stu[i].name, stu[i].sex, stu[i].address, stu[i].email, stu[i].phonenum);//��������ѭ������������п�����fscanf��ȡ����ʧ�ܣ������ļ�ָ�벻�ƶ�
			i++;
		}
	fclose(fp);
	choice=menu();
	while (1) {
		switch (choice) {
		case 1:showinfo(stu, &i); break;
		case 2:increase(stu, &i); break;
		case 3:search(stu, &i); break;
		case 4:deletestu(stu, &i); break;
		case 5:modifierstu(stu, &i); break;
		case 6:break;
		default:puts("wrong choice!!\n"); break;
		}
		if (choice == 6)
		{
			puts("BYE!!!\n");
			break;
		}
		choice = menu();
		if ((fp = fopen("student.dat", "wb")) == NULL) {
			printf("�ļ���ʧ�ܣ�����\n");
			return 0;
		}
		for (j = 0; j < i; j++) {
			fprintf(fp, "%s %s %s %s %s \n", stu[j].name, stu[j].sex, stu[j].address, stu[j].email, stu[j].phonenum);
		}
		fclose(fp);
	}
}

 