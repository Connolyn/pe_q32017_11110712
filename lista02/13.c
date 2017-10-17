#include <stdio.h>


int MDC (int a, int b)
{
	return (b==0)? a : MDC(b, a % b);
}


int main()
{

	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n", MDC(a,b));

}