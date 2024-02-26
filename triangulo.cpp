#include <stdio.h>
#include <stdlib.h>

#define N 10 

int main (int argc, char *argv[]){


        for(int i=0; i<N;i++){
            for (int j=0;j<N;j++){
                if (j>=i)
                    printf("*");
                else 
                    printf(" ");

           }
 
            printf("\n");
        }

   return EXIT_SUCCESS;



}
