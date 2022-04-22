#include "cs50.h"
#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(1);
}

int main(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}