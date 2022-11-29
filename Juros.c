#include<stdio.h>

double cauJuros(double c, double m, double t)
{
	int juro;
	juro =(c * m * t);
	
	return juro;
} 


int main()
{
	double c, m, t;
	scanf ("%lf %lf %lf", &c, &m, &t);
	printf ("%lf\n", cauJuros(c, m, t));
	return 0;
}
