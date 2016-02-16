#include <stdio.h>
#include <assert.h>
/*******************************************************************
* Show a message in stdout
*
*
*
/*******************************************************************/
void showMessage( char *msg)
{
 assert(msg != NULL);
 fputs(msg,stdout);

}
