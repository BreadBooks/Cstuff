/******************************************************************************
 * CSE 1310-005 Spring 2021 
 * File name: Lab 1 Part 2
 * Author : BreadBooks
 * Created on: 1/26/2021
 * UTA Student Name: Brett Boggs
 * UTA ID: 1001646678
 * *******************************************************************************/
#include <stdio.h>

/**************************************************************************** 
 * Lab 1 Part 1 – Practicing with OnlineGDB (Actually using Visual Studio Code)
 ****************************************************************************/

int main()
{
    printf("Testing string output and arithmetic with negative numbers\n");
    printf("%d\n", 32);
    printf("%d\n", -76);
    printf("%d -  %d\n", 32, -76);
    printf("%d\n", 32 - -76);
    printf("Testing more output and arithmetic\n");
    printf("12 + 34 = \n");
    printf("%d\n", 12 + 34);
    printf("12.0 + 34.0 = \n");
    printf("%f\n", 12.0 + 34.0);
    printf("12 + 34 = ");
    printf("%d", 12 + 34);
    printf("%f\n", 12.0 + 34.0);
    printf("");
    printf("Mathematically 12 + 34 = %d and %f\n", (12 + 34) , (12.0 + 34.0));
}
