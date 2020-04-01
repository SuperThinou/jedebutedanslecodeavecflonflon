#include <stdio.h>
#include <stdlib.h>

// Et oui, ici on met une étoile devant "monArgent" pour dire que l'on veut
// la VALEUR de la variable, si on ne mets pas d'étoile monArgent sera égale
// à l'adresse dans la RAM de la variable (un chiffre aléatoire en gros) !
void flofloVoleMonArgent(int *monArgent, int argentVole)
{
    printf("Flonflon me vole un peu d'argent (%d GTA$) ...\n", argentVole);

    // On mets des étoiles devant "monArgent" pour indiquer que l'on veut la
    // VALEUR de la variable "monArgent". Regarde dans la fonction main(),
    // on donne l'adresse de la variable "monArgent".
    *monArgent = *monArgent - argentVole;

    printf("Il me reste seulement %d GTA$...\n\n", *monArgent);
}

void main()
{
    unsigned int monArgent = 100;

    printf("J'ai %d euros dans ma poche !\n\n", monArgent);

    // Le & indique qu'il s'agit d'un pointeur, en gros ici on donne pas
    // la VALEUR de "monArgent" (100) mais l'ADRESSE de la variable !
    flofloVoleMonArgent(&monArgent, 20);
    flofloVoleMonArgent(&monArgent, 20);
    flofloVoleMonArgent(&monArgent, 20);
    flofloVoleMonArgent(&monArgent, 20);
    flofloVoleMonArgent(&monArgent, 20);
}