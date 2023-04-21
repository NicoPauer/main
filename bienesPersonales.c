/*
 Dice si a una persona le toca pagar bienes personales una vez por año.
    Una persona debe pagar bienes personales si la suma de la valuacion
    de sus propiedades, depositos de dinero y otro tipos de bienes propios
    como un celular o un auto supera el monto de los pesos.
  Autor: Nico Pauer
  Mail: nicolaspauer20@gmail.com
  Fecha: 18 de Abril de 2023
*/
#include <stdio.h>

const float monto = 300000;

float propiedades, depositos, otros, total;

void main()
{
  /* Digo de que va el programa */
    printf("\nDICE SI UNA PERSONA DEBE PAGAR O NO BIENES PERSONALES.\n");
    printf("\n-------------------- INGRESE DATOS ------------------------\n");
  /* Obtengo Valuacion de cada cosa */
   /* Valuacion de propiedades */
    printf("\nIngrese valuacion total de todas las propiedades: ");
    scanf("%f", &propiedades);
   /* Valuacion depositos de dinero */
    printf("Ingrese valuacion total de los depositos de dinero: ");
    scanf("%f", &depositos);
   /* Valuacion de otro tipo de bienes personales */
    printf("Ingrese valuacion total de otros bienes personales: ");
    scanf("%f", &otros);
  /* Calculo el dinero total en bienes personales que posee la persona */
    total = (propiedades + depositos + otros);
  /* 
     Muestro si la suma de la valuacion de los bienes personales
     alcanza ese monto maximo permitido que la persona debe pagar bienes personales una vez por año.
    */ 
    printf("\n--------------------- SITUACION DE LA PERSONA -----------------------------");
    if (total >= monto)
    {
        printf("\n\n\tLA PERSONA SI DEBE PAGAR BIENES PERSONALES UNA VEZ POR AÑO.\n\n");
    }
    else
    {
        printf("\n\n\tLA PERSONA NO DEBE PAGAR BIENES PERSONALES.\n\n");
    }
    printf("---------------------------------------------------------------------------\n");
}
