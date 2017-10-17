#include <stdio.h>



void proxima( int anterior[], int atual[],  int tam, int linha)
{

	if (linha == tam) return;

	atual[0] = anterior[0];
	atual[tam] = anterior[tam-1];


	for (int i = 1; i < tam ; i++)
	{
		atual[i] = anterior[i-1] + anterior[i];
	}

	tam++;


	proxima(atual, anterior, tam, linha);
	
}


int pascPiramide ( int linha, int coluna){
	int impar[linha];
	int par[linha];
	int tam = 1;
	impar[0] = 1;
	if(linha>1)
	{
		proxima(impar, par, tam, linha);
	}

	if(linha%2==0)
	{
		return par[coluna];
	}	
	return impar[coluna];

}





int main()
{

	int n, k;
	scanf("%d %d", &n, &k);

	int bi = pascPiramide(n+1, k);

	printf("%d\n", bi);
	

	return 0;
}