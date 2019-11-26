
//  Copyright © 2019 Santos Saavedra Arrivillaga. All rights reserved.
//
    //PROYECTO SEMESTRAL - MI EDAD MATEMÁTICA
#include <stdio.h>
#include "ProblemasRango1.h"
int UbicarRangoconEdad (int edad);
int cambioNivel(int puntos, int rango);
int ProblemasRango1(void) ;
int ProblemasRango2(void) ;
int main() {

    char nombre [20];
    int nacimiento, rango, edad, puntos = 0, seguir ;
    
    
    printf ("Bienvenido al Programa MI EDAD MATEMÁTICA" "\n");
    printf ("Instrucciones:\n");
    printf ("Para Iniciar Escriba los siguientes datos\n");
    printf ("Su Nombre: \n");
    scanf("%s", nombre);
    printf ("Su Año De Nacimiento\n");
    scanf ("%i", & nacimiento);
    edad= 2019 - nacimiento;
    printf("\n LISTO? \t EMPEZEMOS!\n");
    printf("\n");
    rango = UbicarRangoconEdad (edad);
    do {
    switch (rango) {
        case 1:
           puntos = ProblemasRango1() ;
        break;
        case 2:
            puntos = ProblemasRango2();
            break;
  //   case 3:
//            puntos = ProblemasRango3();
//            break;
//        case 4:
//            puntos = ProblemasRango4();
//            break;
//        case 5:
//            puntos = ProblemasRango5();
//            break;
//        case 6:
//            puntos = ProblemasRango6();
//            break;
//        case 7:
//            puntos = ProblemasRango7();
//            break;
    }
   rango = cambioNivel(puntos, rango);
    
    printf("Quieres Seguir Jugando?\n");
        printf("Si desea seguir, presione 1 \n");
        scanf("%i",& seguir);
     }
    while (seguir == 1 );
    printf("Gracias Por Jugar");
    printf("Tu Edad Matemática es entre:");
     return 0;
}
