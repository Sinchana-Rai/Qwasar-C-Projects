#include <stdio.h>
#include <ctype.h>

int my_isdigit(char param_1)
{
    if(isdigit(param_1))
    {
        return 1;
    }
    else {
        return 0;
    }
}

// int main(){

//     printf("-> %c\n", my_isdigit('a'));
//     printf("-> %c\n", my_isdigit(' '));
//     printf("-> %c\n", my_isdigit('0'));
//     printf("-> %c\n", my_isdigit('A'));
//     printf("-> %c\n", my_isdigit('9'));

// }