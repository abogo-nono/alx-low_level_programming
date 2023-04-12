#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{

    if (size == 0)
        return NULL;

    char *table = malloc(size * sizeof(char));

    for (unsigned int i = 0; i < size; i++)
    {
        table[i] = c;
    }

    return table;
}
