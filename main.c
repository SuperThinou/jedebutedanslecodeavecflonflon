#include <stdio.h>
#include <stdlib.h>

int flofloVoleMonArgent(int monArgent, int argentVole)
{
    printf("Flonflon me vole un peu d'argent (%d GTA$) ...\n", argentVole);

    monArgent = monArgent - argentVole;

    printf("Il me reste seulement %d GTA$...\n\n", monArgent);

    return monArgent;
}

void main()
{
    unsigned int monArgent = 100;

    printf("J'ai %d euros dans ma poche !\n\n", monArgent);

    monArgent = flofloVoleMonArgent(monArgent, 20);
    monArgent = flofloVoleMonArgent(monArgent, 20);
    monArgent = flofloVoleMonArgent(monArgent, 20);
    monArgent = flofloVoleMonArgent(monArgent, 20);
    monArgent = flofloVoleMonArgent(monArgent, 20);
}