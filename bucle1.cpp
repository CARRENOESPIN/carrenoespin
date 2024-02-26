#include <stdio.h>
#include <stdlib.h>

#define N 5
 
int main (int argc, char *argv[]){

//    char asterisco = '*';


    for (int i=0;i<N;i++){
        for(int j=0; j<N;j++)
          printf("*");
        printf("\n");
    }

    for (int i=0;i<N;i++){

        printf("\n");
        for(int j=0; j<=i; j++){
            printf("*");
        }
    }

    for (int i=N; i>0; i--){
        for (int j=0;j<i;j++)
           printf("*");
       printf("\n");
    }

   return EXIT_SUCCESS;



}
