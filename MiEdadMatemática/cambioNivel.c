//
//  cambioNivel.c
//  MiEdadMatemática
//
//  Created by Analissa Santos on 11/26/19.
//  Copyright © 2019 Santos Saavedra Arrivillaga. All rights reserved.
//

#include "cambioNivel.h"

int cambioNivel(int puntos, int rango)
{
    if (puntos>3)
    {
        if (rango<6)
        {
            rango=rango+1;
            printf("¡Felicidades! Por tener %i respuestas correctas te subiremos al siguiente nivel\n\n", puntos);
        }
        else if (rango == 7)
        {
            printf("¡Felicidades! Por tener %i respuestas correctas te subiríamos al siguiente nivel, aunque parece que estás en el nivel máximo, por lo que permanecerás aquí, ¡sigue así! \n\n", puntos);
        }
    }
    else if (puntos==3)
    {
        rango=rango;
        printf("¡Bien hecho! Has respondido %i respuestas correctas, por lo que permanecerás en el mismo nivel\n\n", puntos);
    }
    else if (puntos<3)
    {
        if (rango>=2)
        {
            rango=rango-1;
            printf("Qué lástima, no has podido responder suficientes preguntas correctamente... :(  Por lo tanto, te reduciremos de nivel. ¡Sigue esforzándote!\n\n");
        }
        else if (rango == 1)
        {
           printf("Qué lástima, no has podido responder suficientes preguntas correctamente... :(  Por lo tanto, te reduciríamos al nivel anterior; sin embargo, ya estás en el menor nivel. Pero no te preocupes, sigue esforzándote y subirás de nivel. ¡Tú puedes!\n\n");
        }
    }
   
    return rango;
}
