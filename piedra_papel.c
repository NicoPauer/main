/*
  Autor: Nico Pauer
  Mail: nicolaspauer20@gmail.com
  Curso: Informatica I Comison 2

  Siempre gana piedra, papel o tijera segun opcion de usuario
*/
#include <stdio.h>

#ifndef PIEDRA
/* 
  Solo define constantes en la primera compilacion para ser mas eficiente, 
  esto es por la directivas de pre-procesador condicional #ifndef #define #endif 
  en este caso si una constante no fue previamente definida, la define.
*/
    #define PIEDRA 1
#endif

#ifndef PAPEL
    #define PAPEL 2
#endif

#ifndef TIJERA
    #define TIJERA 3
#endif

int opcion;

void main()
{
    /* Digo de que va */
        printf("\t¡¡¡ Jueguemos PIEDRA, PAPEL O TIJERA !!!");
    /* Separo titulo del resto del texto */
        printf("\n\n\t  ");
    /* Obtengo opcion que elige el usuario */
        printf("Escoje opcion (1) PIEDRA, (2) PAPEL, (3) TIJERA: ");
        scanf("%d", &opcion);
   /* Muestro que elige el programa */
      /* 
        Antes de cada opcion cualqiera que sea doy una nueva linea y tabulaciones 
        para que sea vea mas prolijo y tenga identacion la salida, asi limpio el 
        código dentro de los condicionales.
     */

        printf("\n\t\t");

        if (opcion == PIEDRA)
        {
            printf("ELIJO PAPEL, PIERDES POR ELEGIR PIEDRA (ENVUELVO).");
        }
        else
        {
            if (opcion == PAPEL)
            {
                printf("ELIJO TIJERA, PIERDES POR ELEGIR PAPEL (CORTO).");
            }
            else
            {
                if (opcion == TIJERA)
                {
                  printf("ELIJO PIEDRA, PIERDES POR ELEGIR TIJERA (ROMPO).");  
                }
            }
        }
     /* 
        Muestro nuveas lineas para separar del mensaje final de una forma mas legible en 
        el código y para el usuario.
     */
        printf("\n\n\n\t");
   /* Digo que se hizo trampa */
        printf("PERDERAS SIEMPRE PORQUE HAGO TRAMPA, YA SABÍA QUE IBAS A ELEGIR.");
    /* Separo del resto del texto que aparece en la linea de comandos(consola, terminal). */
        printf("\n\n");
}
