#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[30];
	int i = 0;
	scanf("%[^\n]", a);
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			printf("%c", a[i] - 32);
		}
		else if (a[i] >= 'A' && a[i] <= 'Z')
		{
			printf("%c", a[i] + 32);
		}
		else
		{
			printf("%c", a[i]);
		}
		i++;
	}
}