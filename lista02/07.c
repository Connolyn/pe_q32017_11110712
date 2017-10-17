#include <stdio.h>
#include <math.h>



float CtoK(float valor)
{
	return (valor + 273.15);
}

float FtoK(float valor)
{
	return ((valor + 459.67) * 5/9);
}

float KtoC(float valor)
{
	return (valor - 273.15);
}

float KtoF(float valor)
{
	return (valor * 9/5 - 459.67); 
}

void temperatura(int uEntrada, int uSaida, float valor)
{

	if( uEntrada != 3){
		valor = (uEntrada == 1 ?  CtoK(valor) : FtoK(valor)); 
	}

	switch (uSaida)
	{
		case 1:
			printf("%.2f C\n", KtoC(valor));
			break;
		case 2:
			printf("%.2f F\n", KtoF(valor));
			break;
		case 3:
			printf("%.2f K\n", valor);
			break;

	}

}


int BtoD(int valor)
{

	int sum = 0;
	int i = 0;

	while(valor > 0)
	{
		sum += ((valor%10) == 0 ? 0 : pow( (valor%10)*2, i));
		valor /=10;
		i++;
	}
	return sum;
}

int DtoB(int valor)
{

	int i = 0;
	int sum = 0;
	while(valor > 0)
	{
		sum += (valor%2) * pow(10 , i++);
		valor /= 2;
	}

	sum += valor * pow(10 , i) ;
	return sum;
}


void numerico(int uEntrada, int uSaida, float valor){

	if (uEntrada == uSaida)
	{
		printf("%.0f\n", valor);
	}else if(uEntrada == 1)
	{
		printf("%d\n", DtoB(((int)valor)));
	}else
	{
		printf("%d\n", BtoD(((int)valor)));
	}

}



void converte(int conversao, int uEntrada, int uSaida, float valor)
{
	if (conversao==1){
		temperatura(uEntrada, uSaida, valor);
	}else{
		numerico(uEntrada, uSaida, valor);
	}
}



int main()
{
	int conversao, uEntrada, uSaida;
	float valor;
	scanf("%d %d %d %f", &conversao, &uEntrada, &uSaida, &valor);
	converte(conversao, uEntrada, uSaida, valor); 
	return 0;
}