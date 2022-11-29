#include<stdio.h>

void imprimir (int n)
{
	int i;
	for (i = 1; i<=n; i++)
	{
		printf ("%d\n", i);
	}
}

int main()
{
	int n;
	scanf ("%d", &n);
	imprimir (n);

	return 0;
}
