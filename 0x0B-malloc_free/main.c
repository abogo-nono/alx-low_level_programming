#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(void)
{

    char ch = 'a';
    unsigned number = 10, i;

    for (i = 0; i < number; i++)
    {
        printf("%c", *create_array(number, ch));
    }
    
    
    return 0;
}


