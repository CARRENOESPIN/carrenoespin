#include <stdio.h>
#include <stdlib.h>

#define N 10 

int main (int argc, char *argv[]){

unsigned A[N][N];

    //INICIALIZAR
    for(int fila=0;fila<N;fila++)
        for(int col=0; col<fila; col++){
            if(fila==0 && col==0)
               A[fila][col]=1;
            else if((fila==0) && (col!=0))
                A[fila][col]=0;
            else
                A[fila][col]=A[fila-1][col-1]+A[fila-1][col];
        }

    //IMPRIMIR
    for(int fila=0;fila<N;fila++){
        for(int col=0; col<fila; col++)
           printf("%u", A[fila][col]);
        printf("\n");
       }










   return EXIT_SUCCESS;



}
