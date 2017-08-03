#include "stdio.h"
#include "stdlib.h"
#include <stdbool.h>

//int main() {
//
//	int count, sum = -1, sumTmp = 0, left = 0, leftTmp = 0, right = 0, input, first, last;
//	
//	int num[10000];
//
//	bool positive = false, half_positive = false;
//
//
//	scanf("%d", &count);
//
//	for (int i = 0; i < count; i++)
//	{
//
//		scanf("%d", &input);
//		num[i] = input;
//		if (input >= 0)
//		{
//			positive = true;
//		}
//
//		sumTmp = sumTmp + input;
//		if (sum < sumTmp)
//		{
//			left = leftTmp;
//			right = i;
//			sum = sumTmp;
//		}
//		else if (sumTmp < 0)
//		{
//			leftTmp=i+1;
//			sumTmp = 0;
//		}
//
//	}
//
//	if (positive)
//	{
//		printf("%d %d %d", sum, num[left], num[right]);
//	}
//	else
//	{
//		printf("%d %d %d", 0, num[0], num[count-1]);
//	}
//
//	system("pause");
//	return 0;
//}
//
