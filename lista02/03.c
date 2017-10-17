#include <stdio.h>
#include <math.h>

void pi_aprox(){
	double a1 = 0;
	double a = 1;
	double b = 1.0/sqrt(2);
	double t = 1.0/4.0;
	double p = 1.0;

	for (int i = 0; i < 25; ++i)
	{
		a1 = ( a+b )/2;
		b = sqrt( a*b );
		t = t - pow( p *( a - a1 ),2);
		p = 2*p;
		a = a1;
	}

	double pi = (a+b)* (a+b)/(4.0*t);

	printf("%lf\n", pi);


}


int main()
{
	pi_aprox();
	return 0;
}
