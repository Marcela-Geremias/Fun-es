#include<stdio.h>
	
	int pares (int a, int b, int c)
	{
		int cont = 0;
		
		if (a % 2 ==0)
		{
			cont = cont+ 1;
		}
		 
		if (b % 2 == 0)
		{
			cont = cont + 1;
		}
		
		 
		if (c % 2 == 0)
		{
			cont = cont + 1;
		}
		
		return cont;		
	}


int main()
{
	int a, b, c;
		
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d", pares (a, b, c));
	return 0;
}
