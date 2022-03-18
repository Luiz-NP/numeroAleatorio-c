#include <stdio.h>

int main()
{
    //declarando variáveis
    int n, a, b, c;
    //atribuindo lixo de memória
    n = (a + b + c)/100000000.5;
    //limitando possibilidades
    if(n < 0){ n *= -1;}
    if(n > 12){ n /= 2;}
    n = (n == 0) ? n += 1 : n;
    //imprimindo número aleatório
    printf("%d\n", n);
