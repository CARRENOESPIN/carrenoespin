#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (int argc, char *argv[]){

    short a;

    printf ("Tamaño de a: \t%lu\n",sizeof(a));

    printf ("Tamaño de int: \t%lu\n",sizeof(int));

    printf ("a tiene basura. a:%i\n",a);

    printf ("Maximo: %i\n",SHRT_MAX);
    printf ("Minimo: %i\n",SHRT_MIN);

    return EXIT_SUCCESS;

}
