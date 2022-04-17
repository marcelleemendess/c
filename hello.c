// #include <cs50.h>

#include <stdio.h> //libery that gives access to printf functions

int main(void)
{
    // printf("Hello C\n");
    string answer = get_string("What's your name? ");
    printf("hello, #%s\n", answer);
}