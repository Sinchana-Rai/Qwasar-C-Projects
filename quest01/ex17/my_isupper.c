#include <stdio.h>
#include <ctype.h>

int my_isupper(char param_1)
{
    if (isupper(param_1)) {
    return 1;
    }
    else {
        return 0;
    }
}

// int main(){

//     printf("-> %c\n", my_isupper('a'));
//     printf("-> %c\n", my_isupper(' '));
//     printf("-> %c\n", my_isupper('0'));
//     printf("-> %c\n", my_isupper('A'));
//     printf("-> %c\n", my_isupper('9'));

// }