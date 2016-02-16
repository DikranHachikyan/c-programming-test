#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main(int argc, char **argv)
{
    char choice=' ';
    FILE *f = NULL;
    char *buffer;
    switch(choice)
    {
        case 'n': f = createNewFile("test.txt");
                  break;
        case 'o': showMessage("Open File\n");
                  break;
        case 's': saveFile(f,buffer);
                  break;
        default: showMessage("Valid Options:n,o,s\n");
    }

    showMessage("Hello C\n");    
    return 0;
}

