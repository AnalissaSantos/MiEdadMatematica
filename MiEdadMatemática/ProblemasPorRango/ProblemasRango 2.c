//
//  ProblemasRango 2.c
//  MiEdadMatemática
//
//  Created by Analissa Santos on 11/26/19.
//  Copyright © 2019 Santos Saavedra Arrivillaga. All rights reserved.
//

#include "ProblemasRango 2.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int ProblemasRango2()
{
    time_t t1, t2;
    int numero, numero2, solucion, respuesta, puntos=0, NumProblemas=0, diferencia=0, problemas;
    t1 = time(NULL);
    problemas = rand() %3;
    while (NumProblemas<5)
    {
        t2=time(NULL);
        diferencia=difftime(t2, t1);
        if (diferencia>=100) { NumProblemas=5; }
        else
        {
            switch(problemas) {
                case 0 :
                srand((unsigned) time(NULL));
                           numero2 = rand() % 100;
                           numero = rand() % 100;
                           solucion = numero + numero2 ;
                           printf("\t%i + %i = ", numero, numero2);
                           scanf("%i", & respuesta);
                           if (respuesta == solucion) {puntos ++; NumProblemas++;}
                           else if (respuesta!=solucion) { NumProblemas++; }
                    if (respuesta==solucion )
                    {puntos=puntos+1; printf("\t¡Respuesta correcta!\n");}
                    else
                    {printf("\tIncorrecto :( La respuesta correcta es %i\n", solucion);}
            break;
                case 1 :
               srand((unsigned) time(NULL));
                                      numero2 = rand() % 10;
                                      numero = rand() % 10;
                                      solucion = numero * numero2 ;
                                      printf("\t%i x %i = ", numero, numero2);
                                      scanf("%i", & respuesta);
                                      if (respuesta == solucion) {puntos ++; NumProblemas++;}
                                      else if (respuesta!=solucion) { NumProblemas++; }
                    if (respuesta==solucion )
                    {puntos=puntos+1; printf("\t¡Respuesta correcta!\n");}
                    else
                    {printf("\tIncorrecto :( La respuesta correcta es %i\n", solucion);}
                case 2 :
                    srand((unsigned) time(NULL));
                                       numero = rand()%9 + 1;
                                       numero2 = rand()%9 + 1;
                                       solucion = numero - numero;
                                       printf("%i - %i = ", numero, numero2);
                                       scanf("%i", & respuesta);
                                       if (respuesta==solucion) {puntos ++; NumProblemas++;}
                                           else if (respuesta!=solucion) { NumProblemas++; }
                                       if (respuesta == solucion )
                                       {printf("\t¡Respuesta correcta!\n");}
                                       else
                                       {printf("\tIncorrecto :( La respuesta correcta es %i\n", solucion);}
            }
        }
   }
    printf("\n Tu puntaje es %i / 5 \n", puntos);
    printf("\n");
    return puntos;
    }
