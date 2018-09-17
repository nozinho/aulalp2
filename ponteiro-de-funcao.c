#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b);
void subt(int a, int b);
void prod(int a, int b);
void divi(int a, int b);
void resto(int a, int b);

void main(void)
{
    void (*p[5])(int a, int b);
    int n1, n2, i;

    scanf("%d%d", &n1, &n2);
    setbuf(stdin, NULL);

    p[0] = soma;
    p[1] = subt;
    p[2] = prod;
    p[3] = divi;
    p[4] = resto;

    for(i = 0; i < 5; ++i).
    {
        (p[i])(n1, n2);
    }
}

void soma(int a, int b)
{
    printf("A soma: %d\n", (a + b));
}

void subt(int a, int b)
{
    printf("A subtracao: %d\n", (a - b));
}

void prod(int a, int b)
{
    printf("O produto: %d\n", (a * b));
}

void divi(int a, int b)
{
    printf("A divisao: %.2f\n", ((float)a / b));
}

void resto(int a, int b)
{
    printf("O resto: %d\n", (a % b));
}
