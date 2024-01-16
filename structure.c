#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "structure.h"

reel creer_reel(int nb)
{
    reel nombre = (reel) {
        malloc(sizeof(brique)),
        1
    };
    assert (nombre.contenu != NULL);
    nombre.contenu[0].type = 1;
    nombre.contenu[0].u.entier = nb;
    return nombre;
}

void afficher_reel(reel r)
{
    for (int i=0 ; i<r.taille ; i++)
    {
        if (r.contenu[i].type == 1)
        {
            printf("%i",r.contenu[i].u.entier);
        }
        if (r.contenu[i].type == 2)
        {
            printf("-");
        }
        if (r.contenu[i].type ==3)
        {
            printf("-");
        }
        if (r.contenu[i].type == 4)
        {
            printf("-");
        }
    }
    printf("\n");
}
