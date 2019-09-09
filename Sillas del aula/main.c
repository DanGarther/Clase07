#include <stdio.h>
#include <stdlib.h>
#include "array2.h"
//#define T 5

int main(){


    int T = 5;
    int sillasDeAlumnos[T];
    int maximo;
    int minimo;

    void hardcode(sillasDeAlumnos, T);
    void cargarArray(sillasDeAlumnos, T);





maximo = elMaximo(sillasDeAlumnos, T);
    printf("\n%d", maximo);



 minimo = elMinimo(sillasDeAlumnos, T);
    printf("\n%d", minimo);

  return 0;
}
