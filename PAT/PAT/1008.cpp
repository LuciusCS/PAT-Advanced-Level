#include "stdlib.h"
#include "stdio.h"

//
//int main() {
//
//	char ch;
//	int floor[101];
//	//用于对输入的楼层数进行计数
//	int count = 0;
//	int time =0 ;
//	scanf("%d", &floor[count++]);
//	while (ch=getchar()!='\n')
//	{
//		scanf("%d", &floor[count++]);
//	}
//	time += 6 * floor[1]+5;
//
//	for (int i = 2; i < count; i++)
//	{
//		if (floor[i]>floor[i-1])
//		{
//			time += 6 * (floor[i] - floor[i - 1])+5;
//		}
//		else
//		{
//			time += 4 * (floor[i-1] - floor[i])+5;
//		}
//	}
//
//	printf("%d",time);
//
//	system("pause");
//	return 0;
//}