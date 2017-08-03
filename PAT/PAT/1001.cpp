#include "stdio.h"
#include "stdlib.h"

//int main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 0;
//	int tmp[3];
//
//	scanf("%d%d", &a, &b);
//	c = a + b;
//
//	if (c < 0)
//	{
//		printf("%c", '-');
//		c = -c;
//	}
//
//	while (c/1000>=1)
//	{
//		tmp[num] = c % 1000;
//		num++;
//		c = c / 1000;
//		
//	}
//	tmp[num] = c;
//
//	for (int  i = num; i >=0; i--)
//	{
//		if (i==num)
//		{
//			printf("%d", tmp[i]);
//		}
//		else
//		{
//			if (tmp[i]<10)
//			{
//				printf("%s%d", ",00", tmp[i]);
//			}
//			else if (tmp[i]<100)
//			{
//				printf("%s%d", ",0", tmp[i]);
//			}
//			else
//			{
//				printf("%s%d", ",", tmp[i]);
//			}
//
//		}
//	
//	
//	}
//
//	printf("%d",1000000);
//	system("pause");
//	return 0;
//}