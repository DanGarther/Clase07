
#include "misfunciones.h"
void ingresoDeSillas(int sillas[], int T){

    int i;

    for(i = 0; i < T; i++){

        printf("Ingrese silla del alumno.");
        scanf("%d", &sillas[i]);

    }


}

void hardcodeSillas(int sillas[], int T){

int i;
int hardcode[5] = {55, 11, 22, 33, 44};

    for(i = 0; i < T; i++){

        sillas[i] = hardcode[i];



    }

}



void ingresoDeEdades(int edades[], int T){

    int i;

     for(i = 0; i < T; i++){

        printf("Ingrese la edad del alumno.");

        scanf("%d", &edades[i]);

    }


}

void hardcodeEdad(int edad[], int T){

int i;
int hardcode[5] = {98, 19, 81, 91, 98};

    for(i = 0; i < T; i++){

        edad[i] = hardcode[i];



    }

}

void mostrarTodo(int edades[], int sillas[], int T){


int i;

    for(i = 0; i < T; i++){

        printf("Silla: %d     Legajo: %d    Edad: %d\n", i+1, sillas[i], edades[i]);



    }

}

/*int ordenDeLagajo(int edad[], int sillas[], int T){

int i;
int j;
int aux;

for(i=0; i<T-1; i++){


for(j=0; j<T; j++){



}

}

}*/

