#include <stdio.h>
#include <math.h>



double fDelta(double a, double b, double c)
{

	return (pow(b,2)-4*a*c);
}

void baskara(double a, double b, double c)
{
	double result1, result2, delta = fDelta(a,b,c);

	if (delta>0) {

		delta = sqrt(delta);
		result1 = (-b + delta)/ (2*a);
		result2 = (-b - delta)/ (2*a);
		printf("%lf %lf\n",result1, result2);

	}

	if (delta==0) {
		result1 = -b/ (2*a);
		printf("%lf\n",result1);

	}

	if (delta<0){
		delta = sqrt(-delta);
		result1 = (-b + delta)/ (2*a);
		result2 = (-b - delta)/ (2*a);
		printf("%lfi %lfi\n",result1, result2);

	}


}



int main()
{
	
	double a, b, c;


	scanf("%lf %lf %lf", &a, &b, &c);

	baskara(a, b, c);
	return 0;
}