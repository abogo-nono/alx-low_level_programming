#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0, r;

    while (count < 10)
    {
        r = count++;
        printf("%d\n", r);
    }
    
    return 0;
}
