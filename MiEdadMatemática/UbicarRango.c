//
//  UbicarRango.c
//  Copyright © 2019 Santos Saavedra Arrivillaga. All rights reserved.
//

#include "UbicarRango.h"
int UbicarRangoconEdad(int edad)
{   int rango = 0;
    if (edad <=5) {rango=1;}
    else if ((edad>5) & (edad<=8)) {rango = 2;}
    else if ((edad>8) & (edad<=11)) {rango = 3;}
    else if ((edad>11) & (edad<=14)) {rango = 4;}
    else if ((edad>14) & (edad<=17)) {rango = 5;}
    else if ((edad>17) & (edad<=20)) {rango = 6;}
    else { rango = 7;}
  
    return rango; }
