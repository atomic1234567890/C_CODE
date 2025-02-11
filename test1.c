#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("请开始游戏。。。。\n");
	printf("输入：1，进入\n");
	printf("输入：0，退出\n");
}
void game()
{
	int a = 0;
	int put = 0;
	a = rand()%100+1;
	do {
		printf("请输入你的猜测\n");
		srand((unsigned int)time(NULL));
		scanf("%d",&put);
		if (put > a)
			printf("输大了\n");
		else if (put < a)
			printf("输小了\n");
		else
		{
			printf("正确\n");
			break;
		}
	} while (1);
}
int main()
{
	int elect;
	do {
		menu();
		
		scanf("%d", &elect);
		switch(elect)
		{
		case 1:
			printf("欢迎游戏！！！\n");
		game();
			break;
		case 0: {
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (elect);
	return 0;
}