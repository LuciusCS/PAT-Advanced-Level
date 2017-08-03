//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "stdbool.h"
//
//
//typedef struct user {
//	char name[20];
//	char inTime[20];
//	char outTime[20];
//}user;
//
//int main() {
//
//	user user[100];
//	int num;
//	int unLockedIndex;
//	int lockedIndex;
//
//	char inTimeTmp[20];
//	strcpy(inTimeTmp,"23:59:59");
//	char outTimeTmp[20];
//	strcpy(outTimeTmp, "00:00:00");
//	unLockedIndex = 0;
//	lockedIndex = 0;
//	scanf("%d",&num);
//
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%s",&user[i].name);
//		scanf("%s", &user[i].inTime);
//		//大于零表示第二个字符串小于第一个
//		if (strcmp(inTimeTmp, user[i].inTime)>0)
//		{
//			strcpy(inTimeTmp, user[i].inTime);
//			unLockedIndex = i;
//		}
//
//		scanf("%s", &user[i].outTime);
//		//表示第二个字符串大于第一个
//
//		if (strcmp(outTimeTmp, user[i].outTime)<0)
//			{
//				strcpy(outTimeTmp, user[i].outTime);
//				lockedIndex = i;
//			}
//		
//	}
//	printf("%s %s",user[unLockedIndex].name,user[lockedIndex].name);
//	system("pause");
//	return 0;
//}