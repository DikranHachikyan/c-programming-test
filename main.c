#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main(int argc, char **argv)
{
    char choice=' ';
    FILE *f = NULL;
    char *content=NULL;

    switch(choice)
    {
        case 'n': f = createNewFile("test.txt");
                  break;
        case 'o': openFile(f, content);
                  break;
        case 's': saveFile(f,content);
                  break;
        default: showMessage("Valid Options:n,o,s\n");
    }

    showMessage("Hello C\n");    
    return 0;
}

