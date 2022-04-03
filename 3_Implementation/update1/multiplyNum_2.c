#include "stdio.h"
#include "unity.h"

int multiplyNum(int x, int y)
{
    int product= x*y;
    return  product;
}

void manual_test_multiplyNum()
{

    if(0 == multiplyNum(0,0))
    printf("Multiply function works\n");
    else
    printf("Multiply function does not works\n");

    if(12 == multiplyNum(6,2))
    printf("Multiply function works for positive numbers\n");
    else
    printf("Multiply function does not work for positive numbers\n");

    if(-15 == multiplyNum(3,-5))
    printf("Multiply function works for a combination of positive and negative number\n");
    else
    printf("Multiply function does not work for a combination of positive and negative number\n");

    if(20 == multiplyNum(-4,-5))
    printf("Multiply function works for negative numbers\n");
    else
    printf("Multiply function does not work for negative numbers\n");
    
}

