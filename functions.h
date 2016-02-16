/*******************************************************************************
*   Функции в проекта
*
*
*******************************************************************************/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>

typedef enum{
    ERROR,
    SUCCESS
} RET;

void showMessage();

FILE *createNewFile(char *fileName);
#endif
