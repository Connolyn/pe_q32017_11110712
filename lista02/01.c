#include <stdio.h> 



void paridade(int n)
{
	printf( (n%2==0 ? "0\n" : "1\n" ));

	//	return 0;
}


int main()
{
	int n=0;
	printf("Hello World\n");
	scanf("%d", &n);

	paridade(n);
	return 0;
}

