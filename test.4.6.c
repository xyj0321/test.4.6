#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
打印1-100所有整数中出现的多少个数字9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\ncount=%d\n", count);
	return 0;
}
计算1/1-1/2+1/3...+1/99-1/100
int main()
{
	int i = 0;
	double sum = 0;
	double flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum +=flag/ i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}


求十个数中最大值，数组统计这是个数，并用其他数与第一个数比较思路：
1. 采用循环的方式输入一个数组
2. 使用max标记数组中的最大值，采用循环的方式依次获取数组中的每个元素，与max进行比较，如果arr[i]大于    max，更新max标记的最大值，数组遍历结束后，max中保存的即为数组中的最大值。
int main()
{
	int arr[10] = {1,2,3,8,9,7,20,8,99,100};
	int i = 0;
	int max = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d ", &arr[i]);
		max = arr[0];
		for (i = 0; i < 10; i++)
		{
			if (arr[i]>max)
				max = arr[i];
		}
	/*}*/
	printf("%d\n", max);
	return 0;
}

打印乘法表
int main()
{
	int i = 0;
	for (i =1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d ",i,j, i*j);
		printf("\n");
	}
	
	return 0;
}

二分查找，在一组有序整形数组中查找具体某个数，并打印下标
找到中间数组与key比较，
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int left = 0;
	int key = 11;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)//key在左侧，只需改变右边值
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到\n");
	
	return 0;
}



//猜数字游戏：1.电脑随机生成随机数 2.用户猜数字
#include <time.h>
#include <stdlib.h>
int menu()
{
	printf("***************************\n");
	printf("****1.play      0.exit ****\n");
	printf("***************************\n");
}
void game()
{
	//1.生成随机数
	int ret = 0;
	ret = rand()%100+1;//生成0-100的数
	//使用srand函数设置随机数生成，在调用rand之前
	while (1)
	{
		int guess = 0;
		printf("猜数字:>");
			scanf("%d", &guess);
			if (guess > ret)
				printf("猜大了");
			else if (guess < ret)
				printf("猜小了");
			else
			{
				printf("猜对了");
				break;
			}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//()time,强制转换
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
				break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}
