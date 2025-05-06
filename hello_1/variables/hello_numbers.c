#include <stdio.h>

//TODO: Complete printf statements
//TODO Make Sure Examples Work

int main(void)
{
    int hello_num = 43556;
    int world_num = 96753;

    int less_hello = hello_num - 40000;
    int more_world = world_num + 1200;

    int much_less_hello = less_hello / 4;
    int much_more_world = more_world * 2;

    much_less_hello = much_more_world > 3600? 20:500;

    much_less_hello++;
    much_more_world--;

//Add an example to demonstrate pre-decrement;
//pre-decrement is evaluated before the rest of the expression;
//j = 5+ --hello_num;


    ++much_less_hello;
    --much_more_world;

}
