#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


//用于将数组前导零和小数点去掉，并将num[]数组的其他字符保存在 pNUm[]中
void getRidZero(char  num[10000], int *index, int *decimalPoint, char  pNum[10000])
{
	//做一个循环除去开头的零和小数点
	for (int i = 0; i < 10000; i++)
	{
		if (num[i] != '0'&&num[i] != '.'&&num[i] != '\0')
		{
			*index = i;
			break;
		}
	}
	//用于获取小数点的位置
	for (int i = 0; i < 10000; i++)
	{
		if (num[i] == '\0' || num[i] == '.')
		{
			*decimalPoint = i;
			break;
		}
	}

	int j = 0;

	for (int i = *index; i < 10000; i++)
	{
		if (num[i] == '\0' || num[i] < 0)
		{
			pNum[j] = '0';
			j++;
		}
		else if (num[i] == '.')
		{

			continue;
		}

		else
		{
			pNum[j] = num[i];
			j++;
		}

	}

}

//用于将pNum[]中保存的数按照科学计数法输出
void formatPrint(int accuracy, char  pNum[10000], int decimalPoint, int index)
{
	printf("0.");
	for (int i = 0; i < accuracy; i++)
	{
		printf("%C", pNum[i]);
	}
	if (decimalPoint - index >= 0)
	{
		printf("*10^%d", decimalPoint - index);
	}
	else
	{
		printf("*10^%d", decimalPoint - index + 1);
	}
}

int main() {

	int  accuracy;
	char num1[10000];
	char num2[10000];

	char pNum1[10000];
	char pNum2[10000];

	//用于记录小数点的位置
	int decimalPoint1 = 0;
	int decimalPoint2 = 0;

	//用于记录数字开始的位置
	int index1 = 0;
	int index2 = 0;

	bool equal = true;

	scanf("%d %s %s", &accuracy, num1, num2);
	getRidZero(num1, &index1, &decimalPoint1, pNum1);
	getRidZero(num2, &index2, &decimalPoint2, pNum2);


	for (int i = 0; i < accuracy; i++)
	{
		if (pNum1[i] != pNum2[i])
		{
			equal = false;
		}
	}

	if ((index1 - decimalPoint1) != (index2 - decimalPoint2))
	{
		equal = false;
	}

	bool notZero = false;
	//判断00000000 和000000.000000000
	for (int i = 0; i < 5000; i++)
	{
		if (pNum1[i] != '0' || pNum2[i] != '0')
		{
			//证明不是0
			notZero = true;
			break;
		}
	}


	if (!notZero)  //证明都是0   然后输出 0.0000*10^0 ，是第六个测试点
	{
		printf("YES 0.");
		for (int i = 0; i < accuracy; i++)
		{
			printf("%C", '0');
		}
		printf("*10^%d", 0);

	}
	else if (equal)    //如果两个数相等
	{
		printf("YES ");

		formatPrint(accuracy, pNum1, decimalPoint1, index1);

	}
	else          //如果两个数不想等
	{
		printf("NO ");
		formatPrint(accuracy, pNum1, decimalPoint1, index1);

		//输出第二个数
		printf(" ");
		formatPrint(accuracy, pNum2, decimalPoint2, index2);
	}
	system("pause");
	return 0;
}


//测试用例

/*


4 000.123 0.123

3 12.0001 12

5 0 0000.000

3 000123.11 0000122.11

4 0000 000.12   0也要按照科学计数法输出

5 0.001 0.001   //需要自己补0；


error: expected ';', ',' or ')' before '&' token  ：出现该错误的主要原因是：在C语言里没有C++所谓的“按引用传递”


例如C++可以写这样一个函数：

void func(int &a)
{
//函数功能
}

在C语言无法这样使用，所以需要改为地址引用：

void func(int *a)
{
//函数功能
}

int num=10;
//......

func(&num);
//......


warning: format '%s' expects argument of type 'char *', but argument 3 has type 'char (*)[10000]' [-Wformat=]
scanf("%d %s %s", &accuracy, &num1, &num2);


改法如代码所示



*/