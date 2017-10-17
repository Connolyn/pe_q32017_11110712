#include <stdio.h>


unsigned int fat(unsigned int n, unsigned int acc)
{
	if (!n){
		return acc;
	}

	return fat(n-1, acc*n);
	
}

unsigned int fatorial(unsigned int n)
{
	return fat(n, 1);

}

unsigned int coeficienteBinomial(unsigned int n, unsigned int k)
{

	return 	fatorial(n)
			/fatorial(k)
			/fatorial(n-k);	

}



int main()
{
	
	unsigned int n1, n2, resultado;

	scanf("%d %d", &n1, &n2);

	resultado = coeficienteBinomial(n1, n2);
	printf("%d\n",resultado);
	return 0;
}