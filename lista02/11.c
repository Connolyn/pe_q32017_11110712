#include <stdio.h>
#include <math.h>


int BtoD(int valor, int sum, int i)
{

	if (valor <= 0) return sum;

	sum += ((valor%10) == 0 ? 0 : pow( (valor%10)*2, i));
	valor /=10;
	i++;
	
	return BtoD(valor, sum, i);
}

int DtoB(int valor, int sum, int i)
{

	if (valor <=0) return sum + valor * pow(10 , i) ;
	
	sum += (valor%2) * pow(10 , i++);
	valor /= 2;
	

	return DtoB(valor, sum, i);
}



int converte(int valor, int entrada){

	if (entrada == 1)
	{
		return DtoB(valor, 0, 0);
	}else if(entrada == 2)
	{
		return BtoD(valor, 0, 0);
	}

	return -1; 

}



int main()
{
	int valor, entrada;

	scanf("%d %d", &valor, &entrada);

	int saida = converte(valor, entrada); 

	printf("%d\n", saida);

	return 0;
}