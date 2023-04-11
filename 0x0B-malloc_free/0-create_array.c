char *create_array(unsigned int size, char c)
{
    char table[malloc(sizeof(char) * size)];
    int i;

    for (i = 0; i < size; i++)
    {
        table[i] = c;
    }
    
    return table;
}
