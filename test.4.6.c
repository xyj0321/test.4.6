#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
��ӡ1-100���������г��ֵĶ��ٸ�����9
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
����1/1-1/2+1/3...+1/99-1/100
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


��ʮ���������ֵ������ͳ�����Ǹ������������������һ�����Ƚ�˼·��
1. ����ѭ���ķ�ʽ����һ������
2. ʹ��max��������е����ֵ������ѭ���ķ�ʽ���λ�ȡ�����е�ÿ��Ԫ�أ���max���бȽϣ����arr[i]����    max������max��ǵ����ֵ���������������max�б���ļ�Ϊ�����е����ֵ��
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

��ӡ�˷���
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

���ֲ��ң���һ���������������в��Ҿ���ĳ����������ӡ�±�
�ҵ��м�������key�Ƚϣ�
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int left = 0;
	int key = 11;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)//key����ֻ࣬��ı��ұ�ֵ
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
		printf("�Ҳ���\n");
	
	return 0;
}



//��������Ϸ��1.���������������� 2.�û�������
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
	//1.���������
	int ret = 0;
	ret = rand()%100+1;//����0-100����
	//ʹ��srand����������������ɣ��ڵ���rand֮ǰ
	while (1)
	{
		int guess = 0;
		printf("������:>");
			scanf("%d", &guess);
			if (guess > ret)
				printf("�´���");
			else if (guess < ret)
				printf("��С��");
			else
			{
				printf("�¶���");
				break;
			}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//()time,ǿ��ת��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
				break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}
