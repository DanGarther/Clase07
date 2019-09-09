#include "array.h"


void cargarArray(int sillasDeAlumnos[T], int T){

int i;

for(i=0; i < T; i++){

    printf("\n Ingrese legajo del alumno \n ");
    scanf("\n %d \n", &sillasDeAlumnos[i]);



}



}


void hardcode(int sillasDeAlumnos[T], int T){

int i;
int otroArray[T] = {1, 2, 3, 4, 5};

for(i=0; i < T; i++){

    sillasDeAlumnos[] = otroArray[i];

    printf("%d", otroArray[]);



}



}



int elMaximo(int sillasDeAlumnos[], int T ){

    int i;
    int flag = 0;
    int max;

    for(i=0; i < T; i++){

    if(flag == 0 || sillasDeAlumnos > max){

        sillasDeAlumnos = max;

        flag = 1;
    }



}

return max;



}

int elMinimo(int sillasDeAlumnos[], int T ){

    int i;
    int flag = 0;
    int min;

    for(i=0; i < T; i++){

    if(flag == 0 || sillasDeAlumnos < min){

        sillasDeAlumnos = min;

        flag = 1;
    }

    return min;



}}

void inicializarSilla(int sillaDeAlumnos[], int cantidad, int valorDeInicio){

int i;

for(i=0; i < cantidad; i++){

    sillaDeAlumnos[i]=valorDeInicio;

}

}

int estaLibreLaSilla(int sillaDeAlumnos[], int cantidad, int laSilla, int valorDeInicio){

int i;

for(i=0; i < cantidad; i++){

    int retorn = 0;

    if(sillaDeAlumnos(laSilla)==valorDeInicio){

        retorn = 1;
    }


    return retorn;
}

}

int ocuparSilla(int sillaDeAlumnos[], int cantidad, int laSilla, int legajo){

int i;

for(i=0; i < cantidad; i++){

    int retorn = -1;
    int estaLibre;


    if(laSilla < cantidad){

        estaLibre = estaLibreLaSilla(sillaDeAlumnos, cantidad, laSilla, -1);

        if(estaLibre == 1){

            sillaDeAlumnos(lasilla) = legajo;

            retorn = 1;
        }
    }


    return retorn;
}

}

int cantidadDeSillasLibre(int sillaDeAlumnos[], int cantidad, int libre){

int i;
int contadorLibre = 0;

for(i=0; i < cantidad; i++){

    int retorn = -1;
    int estaLibre;


    int estaLibreLaSilla(sillaDeAlumnos,cantidad,laSilla, -1);

    if(laSilla < cantidad){

        estaLibre = estaLibreLaSilla(sillaDeAlumnos, cantidad, laSilla, -1);

        if(estaLibre == 1){

         cantidadDeSillasLibre++
        }
    }



}


