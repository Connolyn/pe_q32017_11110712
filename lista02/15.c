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



void hanoi(int n){
/*	int A[n];
	int topA = n;
	int B[n];
	int topB = 0;
	int C[n];
	int topC = 0;*/


	//move(A, C, B, topA, topC, topB);

}

int main()
{
	int n;
	scanf("%d", &n);
	move(n, 'A', 'C', 'B');
	printf("\n");
	return 0;
}



