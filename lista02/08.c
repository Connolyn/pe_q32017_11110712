#include <stdio.h>
#include <math.h>



float salarioBase(int op)
{
	switch(op){
		case 1:
			return 10000;
			break;
		case 2:
			return 8000;
			break;
		case 3:
			return 5000;
			break;
		case 4:
			return 3000;
			break;
		case 5:
			return 2000;
			break;
	}

	return 0;
}

float descontos(float salario, int faltas)
{
	return salario/20*faltas;
}

float acrescimos(float salario, int horas)
{
	return (salario/(20*8) + 40) * horas;
}


float salario(int cargo, int faltas, int horas)
{
	float salario = salarioBase(cargo);
	return salario - descontos(salario, faltas) + acrescimos(salario, horas);
}


int main()
{
	int cargo, faltas, horas;
	scanf("%d %d %d", &cargo, &faltas, &horas);
	printf("%.2f\n", salario(cargo, faltas, horas));
	return 0;
}