#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[100000];
	scanf("%[^\n]", &a);
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] == 'x' || a[i] == 'y' || a[i] == 'z' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z')
		{
			printf("%c", a[i] - 23);
		}
		else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			printf("%c", a[i] + 3);
		}
		else
		{
			printf("%c", a[i]);
		}
	}
	return 0;
}