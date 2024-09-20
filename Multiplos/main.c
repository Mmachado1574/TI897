#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int v;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um valor inteiro\n");
    scanf("%d",&v);
    if (v%2==0)
        printf ("%d é multiplo de 2\n",v);
    if (v%3==0)
        printf ("%d e multiplo de 3\n",v);
    f (v%5==0)
        printf ("%d e multiplo de 5\n",v);
    return 0;
}
