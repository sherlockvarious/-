//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int cover, amount;
//	int flag = 0;
//	while (1) {
//		int i, j,sum=0;
//		printf("������һ��ɸ����Ҫ�����棿<����0����>\n");
//		scanf("%d", &cover);
//		if (cover == 0)
//			break;
//		printf("�����뼸��ɸ�ӣ�<����0����>\n");
//		scanf("%d", &amount);
//		if (cover == 1) {
//			printf("ɸ��������Ҫ������\n");
//			continue;
//		}
//		if (amount == 0) {
//			printf("������Ҫһ��ɸ��\n");
//			continue;
//		}
//		for (i = 0; i < amount; i++) {	
//			sum += rand() % cover + 1;	
//		}
//		printf("��ʹ��%d��%d��ɸ��ҡ����%d��", amount, cover, sum);
//		flag++;
//	}
//	printf("��һ��ҡ��%d��!!!\nף����ˣ�����", flag);
//}