#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


//���ڽ�����ǰ�����С����ȥ��������num[]����������ַ������� pNUm[]��
void getRidZero(char  num[10000], int *index, int *decimalPoint, char  pNum[10000])
{
	//��һ��ѭ����ȥ��ͷ�����С����
	for (int i = 0; i < 10000; i++)
	{
		if (num[i] != '0'&&num[i] != '.'&&num[i] != '\0')
		{
			*index = i;
			break;
		}
	}
	//���ڻ�ȡС�����λ��
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

//���ڽ�pNum[]�б���������տ�ѧ���������
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

	//���ڼ�¼С�����λ��
	int decimalPoint1 = 0;
	int decimalPoint2 = 0;

	//���ڼ�¼���ֿ�ʼ��λ��
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
	//�ж�00000000 ��000000.000000000
	for (int i = 0; i < 5000; i++)
	{
		if (pNum1[i] != '0' || pNum2[i] != '0')
		{
			//֤������0
			notZero = true;
			break;
		}
	}


	if (!notZero)  //֤������0   Ȼ����� 0.0000*10^0 ���ǵ��������Ե�
	{
		printf("YES 0.");
		for (int i = 0; i < accuracy; i++)
		{
			printf("%C", '0');
		}
		printf("*10^%d", 0);

	}
	else if (equal)    //������������
	{
		printf("YES ");

		formatPrint(accuracy, pNum1, decimalPoint1, index1);

	}
	else          //��������������
	{
		printf("NO ");
		formatPrint(accuracy, pNum1, decimalPoint1, index1);

		//����ڶ�����
		printf(" ");
		formatPrint(accuracy, pNum2, decimalPoint2, index2);
	}
	system("pause");
	return 0;
}


//��������

/*


4 000.123 0.123

3 12.0001 12

5 0 0000.000

3 000123.11 0000122.11

4 0000 000.12   0ҲҪ���տ�ѧ���������

5 0.001 0.001   //��Ҫ�Լ���0��


error: expected ';', ',' or ')' before '&' token  �����ָô������Ҫԭ���ǣ���C������û��C++��ν�ġ������ô��ݡ�


����C++����д����һ��������

void func(int &a)
{
//��������
}

��C�����޷�����ʹ�ã�������Ҫ��Ϊ��ַ���ã�

void func(int *a)
{
//��������
}

int num=10;
//......

func(&num);
//......


warning: format '%s' expects argument of type 'char *', but argument 3 has type 'char (*)[10000]' [-Wformat=]
scanf("%d %s %s", &accuracy, &num1, &num2);


�ķ��������ʾ



*/