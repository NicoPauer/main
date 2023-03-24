/*

Autor: Nico Pauer
Mail: nicolaspauer20@gmail.com
Date: March 23, 2023

LiquiCal © Nico Pauer 2023.
 
Convert Argentians pesos to liqui USD.
 */

#include <stdio.h>

float buy_price, sell_price, liqui_price;

void main()
{
  /* Software Explanation About */
    printf("Liqui Calc: USD Liqui Calculator.\n\n");
  /* Get the buy ARS by the bonds */
    printf("Input ARS bought bonds price: ");
    scanf("%f", &buy_price);
 /* Verify Data */
    while (buy_price <= 0)
    {
        printf("\nWrite a number greater than zero: ");
        scanf("%f", &buy_price);
    }
  /* Get the sell USD incomes from the bonds */
    printf("\nInput USD sold bonds price: ");
    scanf("%f", &sell_price);
  /* Verify Data */
    while (sell_price <= 0)
    {
        printf("\nWrite a number greater than zero: ");
        scanf("%f", &sell_price);
    }
  /* For Expensive shops and Cheap sells, Great USD Liqui cotization by
     ARS bounds devalution. */ 
    liqui_price = (buy_price / sell_price);
  /* Show The result */
    printf("\nThe USD Liqui price is: ARS %.2f\n", liqui_price);
}
