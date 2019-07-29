//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int cover, amount;
//	int flag = 0;
//	while (1) {
//		int i, j,sum=0;
//		printf("请输入一个筛子需要几个面？<输入0结束>\n");
//		scanf("%d", &cover);
//		if (cover == 0)
//			break;
//		printf("请输入几个筛子？<输入0结束>\n");
//		scanf("%d", &amount);
//		if (cover == 1) {
//			printf("筛子最少需要两个面\n");
//			continue;
//		}
//		if (amount == 0) {
//			printf("最少需要一个筛子\n");
//			continue;
//		}
//		for (i = 0; i < amount; i++) {	
//			sum += rand() % cover + 1;	
//		}
//		printf("你使用%d个%d面筛子摇出了%d点", amount, cover, sum);
//		flag++;
//	}
//	printf("你一共摇了%d次!!!\n祝你好运！！！", flag);
//}