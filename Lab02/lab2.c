#include <stdio.h>
#include <math.h>


float fatorial(float n){
	float resultado = 1;

	for (int i = 1; i <= n; ++i)
	{
		resultado = resultado*i;
	}


	return resultado;

}


float somatoria(int n){
	float resultado = 0;

	for (float k = 0; k < n; ++k)
	{
		resultado += ( fatorial(4*k) * (1103 + 26390*k))/( pow(fatorial(k), 4)* pow(396, (4*k)));
	}

	return resultado; 
}


float somatoria2(int n){
	float resultado = 0;

	for (float k = 0; k < n; ++k)
	{
		resultado +=  ( pow(-1, k)*fatorial(6*k) * (13591409 + 545140134*k) ) / 
							( fatorial(3*k) * pow(fatorial(k), 3) * (pow(640320, (3*k + 3.0/2.0) )))   ;
	}

	return resultado; 
}




float ramanujan (int precisao){
	float pi;

	pi = somatoria(precisao) * 2 * sqrt(2)/9801;
	pi = pow(pi, -1);

	return pi;
}


float chudnovsky (int precisao){
	float pi;

	pi = somatoria2(precisao)*12;
	pi = pow(pi, -1);

	return pi;
}






int main(){
	
	printf("lab2 \n" );
	int precisao;
	scanf("%d", &precisao);

	printf("ramanujan = %f\n", ramanujan(precisao));
	printf("chudnovsky = %f\n", chudnovsky(precisao));

	return 0;
}

