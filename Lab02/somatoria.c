#include <stdio.h>
#include <math.h>


int func1(int n){
	return n*2;
}

int func1(int n){
	return n*3;
}


typedef int (*Operacao)(int);

int somatoria( int n, Operacao op ){
	int soma = 0

	for (int k = 0; k < n; ++k)
	{
		soma += op(k)
	}


	return soma;
}


int main(){



	return 0;
}