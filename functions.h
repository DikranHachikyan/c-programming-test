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

void openFile(FILE *,char *);

void showMessage();

FILE *createNewFile(char *);
#endif
