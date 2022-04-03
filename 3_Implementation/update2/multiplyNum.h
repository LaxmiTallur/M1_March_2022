/**
 * @file multiplyNum.h
 * @author Laxmi T
 * @brief Interface for multiplying two integers
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _MULTIPLYNUM_H
#define _MULTIPLYNUM_H

#include "stdio.h"
#include "limits.h"

typedef enum function_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}function_status_t;
 
 
/**
 * @brief Function to multiply two numbers
 * 
 * @param x [in] operand 1 to be multiplied
 * @param y [in] operand 2 to be multiplied
 * @param result [out] Result of multiplication of two numbers successful
 * @return function_status_t Result of function execution
 */

function_status_t multiplyNum(int x, int y, int* result);

#endif /*_MULTIPLY_H*/