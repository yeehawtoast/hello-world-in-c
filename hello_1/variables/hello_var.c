#include <stdio.h>

int main(void)
{
    char *hello = "Hello, World!";

    char h_char = 'H';
    char e_char = 'e';
    char l_char = 'l';
    char o_char = 'o';
    char w_char = 'W';
    char r_char = 'r';
    char d_char = 'd';
    char ex_char = '!';
    char comma_char = ',';

    printf("%s\n", hello);
    printf("%c%c%c%c%c%c %c%c%c%c%c%c", h_char, e_char, l_char, l_char, o_char, comma_char, w_char, o_char, r_char, l_char, d_char, ex_char);
}
