#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("�뿪ʼ��Ϸ��������\n");
	printf("���룺1������\n");
	printf("���룺0���˳�\n");
}
void game()
{
	int a = 0;
	int put = 0;
	a = rand()%100+1;
	do {
		printf("��������Ĳ²�\n");
		srand((unsigned int)time(NULL));
		scanf("%d",&put);
		if (put > a)
			printf("�����\n");
		else if (put < a)
			printf("��С��\n");
		else
		{
			printf("��ȷ\n");
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
			printf("��ӭ��Ϸ������\n");
		game();
			break;
		case 0: {
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (elect);
	return 0;
}