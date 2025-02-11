#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr[] = "hellow son!!!";
	char arr1[] = "#############";
	int left = 0;
	int right = strlen(arr) - 1;
	while (left <= right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		left++;
		right--;
		printf("%s\n", arr1);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr1);
	return 0;
}