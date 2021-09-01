#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int resultat, nombre1, nombre2;
    printf("Veuillez entrer un premier nombre : ");
    scanf("%d", &nombre1);
    printf("Veuillez entrer un second nombre : ");
    scanf("%d", &nombre2);
    resultat = nombre1 + nombre2;
    printf("L'addition de %d avec %d est egale a: %d\n",nombre1, nombre2, resultat);

    return 0;
}
