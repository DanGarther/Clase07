#include <stdio.h>
#include <stdlib.h>
#include "misfunciones.h"
#define T 5


int main()
{

int arrayDeSillas[T];
int arrayDeEdades[T];
int edadYLegajoMax;


printf("Legajo y silla asignada:\n ");
printf("--------------------------\n");

//ingresoDeSillas(arrayDeSillas, T);
hardcodeSillas(arrayDeSillas, T);

printf("-------------\n");

//ingresoDeEdades(arrayDeEdades, T);
hardcodeEdad(arrayDeEdades, T);

mostrarTodo(arrayDeEdades, arrayDeSillas, T);

return 0;
}
