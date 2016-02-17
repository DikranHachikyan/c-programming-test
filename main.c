#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
#include "ui.h"
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
        default: loadUI(NULL);
    }

    showMessage("Hello C\n");    
    return 0;
}

