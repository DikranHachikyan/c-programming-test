#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main(int argc, char **argv)
{
    FILE *f = NULL;
    
    f = createNewFile("test.txt");
    showMessage("Hello C\n");    
    return 0;
}

