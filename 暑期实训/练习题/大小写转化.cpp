#include<stdio.h>
#include<stdlib.h>
#include<string>
void uppercase(char *arr) {
	char brr[100];
	strcpy(brr, arr);
	for (int i = 0; brr[i] != '\0'; i++) {
		if (brr[i] < 123 && brr[i]>96)
			brr[i] -= 32;
	}
	printf("%s\n", brr);
}
void lowercase(char *arr) {
	char brr[100];
	strcpy(brr, arr);
	for (int i = 0; brr[i] != '\0'; i++) {
		if (brr[i] < 91 && brr[i]>64)
			brr[i] += 32;
	}
	printf("%s\n", brr);
}
void transposedcase(char *arr) {
	char brr[100];
	int i;
	strcpy(brr, arr);
	for ( i = 0; brr[i] != '\0'; i++) {
		if (brr[i] < 91 && brr[i]>64)
			brr[i] += 32;
		else if (brr[i] < 123 && brr[i]>96)
			brr[i] -= 32;
	}
	
	printf("%s\n", brr);
}
void originalcase(char *arr) {
	printf("%s\n", arr);
}
int main() {
	int flag = 0;
	char choice;
	char arr[100] = { 0 };
	while (1) {
		if (flag == 0) {
			printf("Enter a string(press q to quit):\n");
			gets_s(arr);
			flag = 1;
		}
		if (arr[0] == 'q' && arr[1] == '\0') {
			printf("BYE!!!\n");
			break;
		}
		printf("Enter menu choice:\nu) uppercase         l)lowercase\nt)transposed case      o)original case\nn) next string\n");
		scanf("%c", &choice);
		getchar();
		switch (choice)
		{
		case 'u': uppercase(arr); break;
		case 'l': lowercase(arr); break;
		case 't': transposedcase(arr); break;
		case 'o': originalcase(arr); break;
		case 'n': flag = 0; break;
		default:printf("wrong choice!!\n"); break;
		}
	}
}