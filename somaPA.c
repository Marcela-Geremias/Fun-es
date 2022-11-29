#include<stdio.h>

int somaPA (int a1, int an, int n)
{
	int soma;
	scanf ("%d %d %d", &a1, &an, &n);
	
	soma = (n*(a1+an))/2;
	
	return soma;
}


int main ()
{
	int a1, an, n;
	printf ("%d\n", somaPA(a1, an, n));
	return 0;
}
