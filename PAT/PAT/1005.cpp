#include "stdlib.h"
#include "stdio.h"

/*
int main() {
	char ch;
	int count = 0;
	int words[4];
	int sum = 0;
	ch = getchar();
	while (ch != '\n')
	{
		sum += ch - '0';
		ch = getchar();
	}
	while (sum / 10 > 0)
	{
		words[count++] = sum % 10;
		sum = sum / 10;
	}
	words[count++] = sum % 10;
	for (int i = count - 1; i >= 0; i--)
	{
		switch (words[i])
		{
		case 0:
			printf("zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		default:
			break;
		}
		if (i!=0)
		{
			printf(" ");
		}

	}
	system("pause");
	return 0;


}
*/