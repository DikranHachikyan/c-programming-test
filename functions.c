#include <stdio.h>
#include <assert.h>
/*******************************************************************
* Show a message in stdout
*
*
*
/*******************************************************************/
void openFile(FILE *fn,char *c)
{
 //open file
}
FILE *createNewFile(char *fileName)
{
    FILE *fn = open(fileName,"w");
    
    return fn;
}

void showMessage( char *msg)
{
 assert(msg != NULL);
 fputs(msg,stdout);

}
