#include<stdio.h>

int somaMaiMen(int a, int b, int c)
{
	int soma = 0;
	int menor = 0;
	int maior = 0;
	
	//scanf ("%d %d %d", &a, &b, &c);
	
	if ( a > b && a > c)
	{
		maior = a;
	}
		if ( b > a && b > c)
	{
		maior = b;
	}
	
	else 	
	{
		maior = c;
	}
	
	if ( a < b && a < c)
	{
		menor = a;
	}
	
		if ( b < a && b < c)
	{
		menor = b;
	}
	else
	{
		menor = c;
	}
	
	soma = maior + menor;
	
	return soma; 
}

int main()
{
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d\n",somaMaiMen(a, b, c));
	return 0;
}
