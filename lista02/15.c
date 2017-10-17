#include <stdio.h>



void move(int n, char origem, char destino, char using)
{
	if (n==1){
		printf("%c-%c, ", origem, destino);
	}else{
		move(n-1, origem, using, destino);
		move(1, origem, destino, using);
		move(n-1, using, destino, origem);
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	move(n, 'A', 'C', 'B');
	printf("\n");
	return 0;
}



