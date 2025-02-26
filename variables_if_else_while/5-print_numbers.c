#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char only = '0';

    while (only <= '9')
    {
        putchar(only);
        only++;
    }
    putchar('\n');

    return (0);
}
