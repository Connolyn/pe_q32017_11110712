#include <stdio.h>



int expo(int x, int y)
{
	if ( y == 2) return x*x;
	if ( y == 1) return x;
	if ( y == 0) return 1;

	int expA = expo(x, y/2);
	int expB = expo(x, y%2);

	return expA*expA*expB;

}


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", expo(x, y));
	return 0;
}