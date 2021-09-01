#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    const int MAX = 100, MIN = 1;
    int nombreMystere,nombreUser,nombreEssais;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  
    do
    {
        printf("Quel est le nombre mystere? : ");
        scanf("%d", &nombreUser);
        nombreEssais++;
        
        if (nombreMystere > nombreUser)
        {
            printf("C'est plus.\n");
        }
        else if (nombreMystere < nombreUser)
        {
            printf("C'est moins.\n");
        }
        else
        {
            printf("Bravo ! Le chiffre mystere etait %d. Tu as reussi en %d essais", nombreMystere, nombreEssais);
        }
    }
    while (nombreMystere != nombreUser);

  return 0;
}
