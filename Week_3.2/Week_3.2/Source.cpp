#include<stdio.h>
int main()
{
	int n, m = 0, h = 0, s = 0;
	printf("Enter second(s) :");
	scanf_s("%d", &n);
	m = n / 60;
	s = n % 60;
	if (m >= 60)
	{
		h = m / 60;
		m %= 60;
	}
	printf("%d hour(s) %d minute(s) %d second(s).", h, m, s);
}