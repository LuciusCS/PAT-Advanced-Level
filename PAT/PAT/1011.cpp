//#include "stdio.h"
//#include "stdlib.h"
//
//
//int main()
//{
//	char line[3] = {'W','T','L'};
//	char outChar[3];
//
//	int index;
//	float in,tmp;
//	float result=1;
//
//
//	for (int  i = 0; i < 3; i++)
//	{
//		index = 0;
//		tmp = 0;
//		for (int j = 0; j <3; j++)
//		{
//			scanf("%f",&in);
//			if (tmp<in)
//			{
//				tmp = in;
//				index = j;
//			}
//
//		}
//		result *= tmp;
//		outChar[i]=line[index];
//
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%c ",outChar[i]);
//	}
//	
//	printf("%.2f", (result*0.65 - 1) * 2);
//	system("pause");
//	return 0;
//}