#include <stdio.h>

void hello(void)
{
    printf("Hello, World!");
}

void increment(int a)
{
     a++;

    printf("Your number is: %i",a);
}


int main(void)
{
    int hellonum = 123456;
    hello();
    increment(hellonum);
}
