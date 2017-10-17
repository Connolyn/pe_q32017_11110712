#include <stdio.h>
#include <math.h>
int palindromoC(unsigned n, int dig)
{
    if (n < 10) return 1;

    int first = n/ pow(10,dig-1);
    int last = n%10;
    n -= first*pow(10,dig-1);
    n /= 10;

    if (first == last){
        return palindromoC(n, dig-2);
        
    } 
    return -1;
}

int palindromo(unsigned int n)
{
    int dig;
    int aux = n;
    while(aux>0)
    {
        dig++;
        aux /=10;
    }
    return palindromoC(n, dig);
}




int main()
{
    unsigned int n; 
    scanf("%d", &n);
    printf((palindromo(n)==1? "sim" : "nao"));
    printf("\n");
}