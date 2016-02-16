#include <stdio.h>

#include "functions.h"

int main(int argc, char **argv)
{
    char choice=' ';

    switch(choice)
    {
        case 'n': showMessage("New File\n");
                  break;
        case 'o': showMessage("Open File\n");
                  break;
        case 's': showMessage("Save File\n");
                  break;
        default: showMessage("Valid Options:n,o,s\n");
    }
    showMessage("Hello C\n");    
    return 0;
}

