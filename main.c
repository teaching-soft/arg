/*      main.c
        semplice esempio di gestione dei parametri da linea di comando

        argn = numero degli argomenti
        argv = puntatore a un vettore di stringhe
        Compilare con gcc main.c -o arg
        Eseguire con ./arg xxx yyy
*/

#include <stdio.h>

int main(int argc, char **argv /* Oppure char *argv[] */)
{
        /* Stampa gli argomenti della linea di comando */
        int i;
        printf("argc (numero degli argomenti)=%d\n",argc);
        for(i=0;i < argc;++i)
                printf("argv[%d]: = %s\n",i,argv[i]);
        return 0;
}
