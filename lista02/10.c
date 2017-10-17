#include <stdio.h>

int fibMen[1000];

int fib (int n){

	if (n==0) return 0;
	if(fibMen[n]) return fibMen[n];

	fibMen[n] = fib(n-1) + fib(n-2);

	return fibMen[n];

}


int main()
{
	int n;

	fibMen[1] = 1;
	fibMen[2] = 1;

	scanf("%d", &n);
	fib(n);
	for (int i = 0; i <= n; ++i)
	{
		printf("%d ", fibMen[i]);
	}

	printf("\n");


	return 0;
}