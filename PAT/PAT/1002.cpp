//#include "stdio.h"
//#include "stdlib.h"
//
//int main() {
//	int k1, k2, k3, count1 = 0, count2 = 0, count3 = 0;
//	float NA1[20] = { 0 };
//	float NA2[20] = { 0 };
//	float NA3[40] = { 0 };
//	char ch;
//
//	scanf("%d", &k1);
//	while (ch = getchar() != '\n')
//	{
//		scanf("%f", &NA1[count1++]);
//	}
//
//	scanf("%d", &k2);
//	while (ch = getchar() != '\n')
//	{
//		scanf("%f", &NA2[count2++]);
//	}
//
//	count1 = count2 = 0;
//
//	while (count1 < 2 * k1  && count2 < 2 * k2)
//	{
//		if (NA1[count1] == NA2[count2])
//		{
//			NA3[count3++] = NA1[count1++];
//			count2 += 1;
//			NA3[count3++] = NA1[count1++] + NA2[count2++];
//		}
//		else if (NA1[count1] > NA2[count2])
//		{
//			NA3[count3++] = NA1[count1++];
//			NA3[count3++] = NA1[count1++];
//		}
//		else
//		{
//			NA3[count3++] = NA2[count2++];
//			NA3[count3++] = NA2[count2++];
//		}
//	}
//
//	while (count1 < 2 * k1) {
//		NA3[count3++] = NA1[count1++];
//		NA3[count3++] = NA1[count1++];
//	}
//
//	while (count2 < 2 * k2)
//	{
//		NA3[count3++] = NA2[count2++];
//		NA3[count3++] = NA2[count2++];
//	}
//
//	k3 = (count3 + 1) / 2;
//
//	for (int i = 0; i < count3; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (NA3[i + 1] == 0)
//			{
//				i++;
//				k3--;
//			}
//
//		}
//	}
//
//
//	printf("%d", k3);
//
//	
//	for (int i = 0; i < count3; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (NA3[i + 1] == 0)
//			{
//				i++;
//			}
//			else
//			{
//				printf(" ");
//				printf("%d", (int)NA3[i]);
//			}
//		}
//		else {
//			printf(" ");
//			printf("%.1f", NA3[i]);
//		}
//
//	}
//	system("pause");
//	return 0;
//}