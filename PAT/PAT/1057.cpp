#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"

typedef struct {
	int stackSize;
	int *base;
	int *top;
}stack, *pStack;

void initStack(pStack p, int stackSize)
{
	p->base = (int *)malloc(sizeof(int)*stackSize);
	if (p->base != NULL)
	{
		p->top = p->base;
	}
}

bool isEmpty(pStack p) {
	if (p->base == p->top)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int pop(pStack p) {
	if (!isEmpty(p))
	{
		printf("Invalid\n");
		return 0;
	}
	else
	{
		p->top--;
		printf("%d\n", *p->top);
		return *p->top;
	}
}

void push(pStack p, int data) {
	*(p->top)++ = data;
}



//
//int main() {
//
//	stack stack;
//	initStack(&stack, 100);
//	//count���ڼ�¼�������������,num���ڼ�¼��ջ�����֣�stackCount���ڼ�¼ջ�����ֵ�����,topDataΪջ��Ԫ��
//	int count=0, num=0, stackCount = 0, topData, topDataIndex;
//	int sortNum[100000];
//	char s[200];
//	scanf("%d", &count);
//
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%s", &s);
//		if (strcmp(s, "Pop") == 0)
//		{
//			if (!isEmpty(&stack))
//			{
//				printf("Invalid\n");
//			}
//			else
//			{
//				topData = pop(&stack);
//				//��Ҫ����ջ����Ԫ�ش�������ȥ��
//				for (int i = 0; i < stackCount; i++)
//				{
//					if (sortNum[i] == topData)
//					{
//
//						for (int j = i; j < stackCount - 1; j++)
//						{
//							sortNum[j] = sortNum[j + 1];
//						}
//						sortNum[stackCount - 1] = -1;
//						break;
//					}
//				}
//				stackCount--;
//			}
//
//
//		}
//		else if (strcmp(s, "PeekMedian") == 0)
//		{
//			if (!isEmpty(&stack))
//			{
//				printf("Invalid\n");
//			}
//			else
//			{
//				if (stackCount%2==0)
//				{
//					printf("%d\n", sortNum[stackCount / 2 - 1]);
//				}
//				else
//				{
//					printf("%d\n", sortNum[(stackCount+1) / 2 - 1]);
//				}
//				
//			}
//
//		}
//		else if (strcmp(s, "Push") == 0)
//		{
//			scanf("%d", &num);
//			push(&stack, num);
//			//����ʱ���մ�С�������е�
//			for (int i = stackCount - 1; stackCount >= 0; i--)
//			{
//				if (sortNum[i] <= num)
//				{
//					sortNum[i + 1] = num;
//					break;
//				}
//				else
//				{
//					sortNum[i + 1] = sortNum[i];
//				}
//			}
//			stackCount++;
//		}
//	}
//	system("pause");
//	return 0;
//}