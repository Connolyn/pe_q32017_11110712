#include <stdio.h> 
#include <math.h>

float soma( float n1, float n2)
{
	return n1 + n2;
}

float sub( float n1, float n2)
{
	return n1 - n2;
}

float mult( float n1, float n2)
{
	return n1 * n2;
}

float div( float n1, float n2)
{
	return n1 / n2;
}

float exp02( float n1, float n2)
{
	return pow(n1 , n2);
}


float calc(int op, float n1, float n2)
{

		switch(op) {

	case 1  :
		return soma( n1, n2);
		break; 

	case 2  :
		return sub( n1, n2);
		break;

	case 3  :
		return mult( n1, n2);
		break;

	case 4  :
		return div( n1, n2);
		break;

	case 5  :
		return exp02( n1, n2);
		break;  

	}

	return 0;

}



int main()
{
	float n1, n2, resultado;
	int op;

	scanf("%d %f %f", &op, &n1, &n2);
	resultado = calc(op, n1, n2);
	printf("%f\n",resultado);
	return 0;
}

