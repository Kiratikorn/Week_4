#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d is not Prime Number", n);
			return 0;
		}
	}
	printf("%d is Prime Number", n);
	return 0;
}