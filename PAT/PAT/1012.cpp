//#include "stdio.h"
//#include "stdlib.h"
//#include "stdbool.h"
//
//int main() {
//
//	int student[2000][7];
//	int num;
//	int checkNum;
//	int sum;
//	scanf("%d", &num);
//	scanf("%d",&checkNum);
//
//	for (int i = 0; i < num; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &student[i][j]);
//			if (j != 0)
//			{
//				sum += student[i][j];
//			}
//
//		}
//		student[i][4] = sum / 3;
//	}
//
//	//���������Լ������ߵ�����
//	int rank;
//	int rankTmp;
//	int finalType = 0;
//	int score[4];
//
//
//	for (int k = 0; k < num; k++)
//	{
//		rank = 0;
//		finalType = 0;
//		for (int i = 0; i <4; i++)
//		{
//			score[i] = student[k][i+1];
//		}
//
//		//���Ȼ��ƽ���ɼ�������
//		for (int i = 0; i < num; i++)
//		{
//			if (student[i][4] > score[3])
//			{
//				rank++;
//			}
//		}
//
//
//		//�����һ��forѭ������һ��Student����С����
//		for (int i = 0; i < 4; i++)
//		{
//			rankTmp = 0;
//			for (int j = 0; j < num; j++)
//			{
//				if (student[j][i+1]>score[i])
//				{
//					rankTmp++;
//				}
//			}
//			if (rankTmp<rank)
//			{
//				rank = rankTmp;
//				finalType = i+1;
//			}
//		}
//		//���ڱ�������
//		student[k][5] = rank+1;
//		student[k][6] = finalType;
//	}
//	
//
//
//	//���ڽ��в���
//	int searchStudent[2000];
//	bool exit;
//
//	char type[5] = { 'A','C','M','E','\0' };
//	for (int i = 0; i < checkNum; i++)
//	{
//		scanf("%d",&searchStudent[i]);
//	}
//
//	for (int i = 0; i < checkNum; i++)
//	{
//		exit = false;
//		for (int j = 0; j < num; j++)
//		{
//			if (searchStudent[i]==student[j][0])
//			{
//				printf("%d ",student[j][5]);
//				printf("%c\n", type[student[j][6]]);
//				exit = true;
//			}
//		}
//		if (!exit)
//		{
//			printf("N/A\n");
//		}
//	}
//
//
//
//	system("pause");
//	return 0;
//}