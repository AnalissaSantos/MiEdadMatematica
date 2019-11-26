//
//  ProblemasRango1.c
//  MiEdadMatemática

//  Copyright © 2019 Santos Saavedra Arrivillaga. All rights reserved.
//

#include "ProblemasRango1.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int ProblemasRango1()
//SOLAMENTE SUMAS DE 1 DÍGITO
{
    time_t t1, t2;
    int numero, numero2, solucion, respuesta, puntos=0, NumProblemas=0, diferencia=0;
    t1 = time(NULL);
    while (NumProblemas<5)
    {
        t2=time(NULL);
        diferencia=difftime(t2, t1);
        if (diferencia>=20) { NumProblemas=5; }
        else
        {
            srand((unsigned) time(NULL));
            numero2 = rand() % 10;
            numero = rand() % 10;
            solucion = numero + numero2 ;
            printf("\t%u + %i = ", numero, numero2);
            scanf("%i", & respuesta);
            if (respuesta == solucion) {puntos ++; NumProblemas++;}
            else if (respuesta!=solucion) { NumProblemas++; }
            if (respuesta==solucion )
            { printf("\t¡Respuesta correcta!\n");}
            else
            {printf("\tIncorrecto :( La respuesta correcta es %i\n", solucion);}
        }
   }
   printf("\n Tu puntaje es %i / 5 \n", puntos);
    printf("\n");
    return puntos;
}
