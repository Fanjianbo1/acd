#include <stdio.h>
int main()
{
	int a,b;
	/*scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf("%d是偶数\n", a);
	}
	else
	{
		printf("%d是奇数\n", a)	;
	}*/
	printf("1-100之间的偶数有：\n");
	for (int i = 1;i <= 100;i++)
	{
		a = i % 2;
		if (a ==0)
		{
			printf("%4d", i);
		}
	}
}