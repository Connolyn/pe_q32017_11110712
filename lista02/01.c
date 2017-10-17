#include <stdio.h> 



void paridade(int n)
{
	printf( (n%2==0 ? "0\n" : "1\n" ));

}


int main()
{
	int n=0;
	scanf("%d", &n);
	paridade(n);
	return 0;
}

