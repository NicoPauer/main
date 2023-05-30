/*
  Datos de Autoria:

    Autor: Nico Pauer
    Fecha: 29/05/2023
    Mail: nicolaspauer20@gmail.com
    Curso: UTN FRBB - Informatica I, comision 2B

  Descripcion:

    Calcula una de las posibles operaciones entre los vectores en R 3 u y v
    representados como arreglos de tres componentes reales:

        1. Suma
        2. Resta
        3. Producto Escalar
        4. Producto Vectorial
        5. Modulo de cada vector 
        6. Directores
        7. proyeccion de cada vector 
        8. vector proyeccion de cada vector 
        9. Terminar;

   Compilacion:  gcc calculadora-vectorial.c -o calculadora-vectorial -lm
   
   Nota: Al ingresar la tercera componente del primer vector el bucle se vuelve infinito.

*/

#include <stdio.h>
#include <math.h>

/* Vectores representados como arreglos */
double u[3], v[3], resultado[3], director_u[3], director_v[3], proyeccion_uv[3], proyeccion_vu[3];
/* Componentes de los vectores */
double ux, uy, uz, vx, vy, vz;
/* Numero Escalar */
double escalar;
/* Resultados escalares */
double modulo_u, modulo_v, resultado_uv, resultado_u, resultado_v;
/* Variables de control */
int opcion;

void main()
{
    do
    {
        /* Solicito vectores al usuario dentro del bucle para que 
           calcule las operaciones sobre los vectores que necesite usar para que no sean los mismos */
        printf("\n\nIngrese vector u: ");
        scanf("\t(%lf, %lf, %lf)", &ux, &uy, &uz);
        printf("\nIngrese vector v: ");
        scanf("\t(%lf, %lf, %lf)", &vx, &vy, &vz);
       /* Asigno componente a posicion correspondiente en los arreglos de los vectores */

        u[0] = ux;
        u[1] = uy;
        u[2] = uz;

        v[0] = vx;
        v[1] = vy;
        v[2] = vz;
       /* Muestro opciones posibles al usario */
        printf("\nTIENES LAS SIGUIENTES OPCIONES: \n");
        printf("\t1. Suma\n");
        printf("\t2. Resta\n");
        printf("\t3. Producto Escalar\n");
        printf("\t4. Producto Vectorial\n");
        printf("\t5. Modulo De Cada Vector\n");
        printf("\t6. Directores\n");
        printf("\t7. Proyeccion de Cada Vector\n");
        printf("\t8. Vector Proyeccion de Cada Vector\n");
        printf("\t9. Cerrar El Programa\n");

        printf("\nIngrese opcion: ");
       /* Solicito al usario la opcion */
        scanf("%d", &opcion);
      /* Realiza la opcion solicitada */
        switch(opcion)
        {
           /* Veo que operacion realizar */

            case 1:
              /* Suma */ 
                printf("\nLa Suma da el vector (%.2lf, %.2lf, %.2lf).", (ux + vx), (uy + vy), (uz + vz));
            break;

            case 2:
              /* Resta */
                printf("\nLa Resta da el vector (%.2lf, %.2lf, %.2lf).", (ux - vx), (uy - vy), (uz - vz));
            break;

            case 3: 
              /* Producto Escalar */
                printf("\nEl Producto Escalar da el real, %.2lf", ((ux * vx) + (uy * vy) + (uz * vz)));
            break;

            case 4: 
              /* Producto Vectorial */
                printf("\nEl Producto Vectorial da el vector (%.2lf, %.2lf, %.2lf).", (ux * vx), (uy * vy), (uz * vz));
            break;

            case 5: 
                /* Modulo de cada uno de los vectores, uso funciones pow para potencia
                   y sqrt para raices cuadradas presntes en la biblioteca <math.h> */
                    printf("\nModulo de vector u da el real, %.2lf.", sqrt((pow(ux, 2) + pow(uy, 2) + pow(uz, 2))));
                    printf("\nModulo de vector v da el real, %.2lf.", sqrt((pow(vx, 2) + pow(vy, 2) + pow(vz, 2))));
            break;

            case 6: 
                /* Directores */
            break;

            case 7: 
                /* Proyeccion de cada uno de los vectores */
            break;

            case 8: 
                /* Vector Proyeccion de cada uno de los vectores */
            break;

          /* La ultima opcion termina el programa, es bastante practica para
             no detener el programa ni forzar su detencion */
            case 9: break; break;
          /* La opcion debe ser una de las posibles */
            default: printf("\nOPCION NO VALIDA (= P).\n"); break;
        }
    } while (opcion != 9);
}
