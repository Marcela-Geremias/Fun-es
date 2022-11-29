
#include<stdio.h>

int maior (int x, int y)
{
	int m;
	
	if (x>y)
	{
		m = x + 0;
	} 
	else
	{
		m = y + 0;
	}
	return m;
}


int main ()
{
	int x, y;
	scanf ("%d %d", &x, &y);
	printf ("%d\n", maior (x, y));
	return 0;
}
