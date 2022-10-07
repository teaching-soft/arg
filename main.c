/***************************************************************************
	file				 : main.c
    begin                : 2019
    copyright            : (C) 2019 by Giancarlo Martini and friends
    email                : gm@giancarlomartini.it

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

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
