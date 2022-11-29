#include<stdio.h>
int figuGeometrica (int b, int h)
{
	int forma = 0;
	//scanf ("%d %d", &b, &h);
	if (b == h)
	{
		forma = forma + 1;
	}

	return forma ;
}



int main()
{
	int b, h;
	scanf ("%d %d", &b, &h);
	printf ("%d\n", figuGeometrica(b, h));
	
	return 0;
}
