#include<stdio.h>
int main()
{
	int n, i;
	scanf_s("%d", &n);
	for (i = 0; i < 2 * n + 3; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			if (i % (n + 1) == 0 && (j == 0 || j == n + 1))
			{
				printf(" ");
			}
			else if (i % (n + 1) == 0 || j == 0 || j == n + 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");

	}
	return 0;
}