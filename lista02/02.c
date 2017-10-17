#include <stdio.h> 



float volume(float n1, float n2, float n3)
{
	return n1 * n2 * n3;
}


int main()
{
	float n1, n2, n3, resultado;
	scanf("%f %f %f", &n1, &n2, &n3);
	resultado = volume(n1, n2, n3);
	printf("%.2f\n",resultado);
	return 0;
}

