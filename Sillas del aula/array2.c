#include "array2.h"


void cargarArray(int sillasDeAlumnos[], int T){

int i;

for(i=0; i < T; i++){

    printf("\n Ingrese legajo del alumno \n ");
    scanf("\n %d \n", &sillasDeAlumnos[i]);



}



}


void hardcode(int sillasDeAlumnos[], int T){

int i;
int otroArray[5] = {1, 2, 3, 4, 5};

for(i=0; i < T; i++){

    sillasDeAlumnos[i] = otroArray[i];

    printf("%d", otroArray[i]);



}



}



int elMaximo(int sillasDeAlumnos[], int T ){

    int i;
    int flag = 0;
    int max;

    for(i=0; i < T; i++){

    if(flag == 0 || sillasDeAlumnos[i] > max){

        sillasDeAlumnos[i] = max;

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

    if(flag == 0 || sillasDeAlumnos[i] < min){

        sillasDeAlumnos[i] = min;

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

    if(sillaDeAlumnos[laSilla]==valorDeInicio){

        retorn = 1;
    }


    return retorn;
}

}

/*int ocuparSilla(int sillaDeAlumnos[], int cantidad, int laSilla, int legajo){

int i;

for(i=0; i < cantidad; i++){

    int retorn = -1;
    int estaLibre;


    if(laSilla < cantidad){

        estaLibre = estaLibreLaSilla(sillaDeAlumnos, cantidad, laSilla, -1);

        if(estaLibre == 1){

            sillaDeAlumnos[lasilla] = legajo;

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



}*/


