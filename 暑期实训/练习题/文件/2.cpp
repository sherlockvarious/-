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
	printf("请输入学生姓名\n");
	scanf("%s", stu[*i].name);
	printf("请输入学生性别\n");
	scanf("%s", stu[*i].sex);
	printf("请输入学生地址\n");
	scanf("%s", stu[*i].address);
	printf("请输入学生邮箱\n");
	scanf("%s", stu[*i].email);
	printf("请输入学生电话号码\n");
	scanf("%s", stu[*i].phonenum);
	(*i)++;
	
}
void search(student *stu, int *i) {
	char name[20];
	int j;
	printf("请输入需要查找的学生的姓名\n");
	scanf("%s", name);
	for (j = 0; j < *i; j++) {
		if (strcmp(name, stu[j].name) == 0)
		{
			printf("姓名：%s\n性别：%s\n地址：%s\n电话号码：%s\n邮箱：%s\n", stu[j].name, stu[j].sex, stu[j].address, stu[j].phonenum, stu[j].email);
			return;
		}
	}
	printf("查无此人！！！\n");
	return;
}
void deletestu(student *stu, int *i) {
	char name[20];
	int j,k;
	printf("请输入需要查找的学生的姓名\n");
	scanf("%s", name);
		for (j = 0; j < *i; j++) {
			if (strcmp(name, stu[j].name) == 0)
			{
				if (j == (*i) - 1) {
					(*i)--;
					printf("删除成功！！！\n");
					return;
				}
				else {
					for (k = j; k < *i - 1; k++)
						stu[k] = stu[k + 1];
					printf("删除成功！！！\n");
					(*i)--;
					return;
				}
			}
		}
		
	printf("查无此人！！！\n");
	return;
}
void modifierstu(student *stu, int *i) {
	char name[20];
	int j;
	printf("请输入需要查找的学生的姓名\n");
	scanf("%s", name);
	for (j = 0; j < *i; j++) {
		if (strcmp(name, stu[j].name) == 0)
		{
			printf("请输入学生姓名\n");
			scanf("%s", stu[j].name);
			printf("请输入学生性别\n");
			scanf("%s", stu[j].sex);
			printf("请输入学生地址\n");
			scanf("%s", stu[j].address);
			printf("请输入学生邮箱\n");
			scanf("%s", stu[j].email);
			printf("请输入学生电话号码\n");
			scanf("%s", stu[j].phonenum);
			return;
		}
	}
	printf("查无此人！！！\n");
	return;
}
void showinfo(student *stu, int *i) {
	int j;
	printf("姓名    性别      地址         号码           邮箱\n");
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
		printf("文件打开失败！！！\n");
		return 0;
	}
	rewind(fp);
		while (!feof(fp))
		{
			fscanf(fp, "%s %s %s %s %s ", stu[i].name, stu[i].sex, stu[i].address, stu[i].email, stu[i].phonenum);//若出现死循环的情况，很有可能是fscanf读取数据失败，导致文件指针不移动
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
			printf("文件打开失败！！！\n");
			return 0;
		}
		for (j = 0; j < i; j++) {
			fprintf(fp, "%s %s %s %s %s \n", stu[j].name, stu[j].sex, stu[j].address, stu[j].email, stu[j].phonenum);
		}
		fclose(fp);
	}
}

 