#include <stdio.h>
#include <assert.h>

#include <functions.h>
/*******************************************************************
* Show a message in stdout
*
*
*
/*******************************************************************/

RET  saveFile(FILE *fn, char *buffer)
{
    assert(fn != NULL);
    assert(buffer != NULL );
    
    fputs(buffer, fn);

    return  RET.SUCEESS;
}

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
