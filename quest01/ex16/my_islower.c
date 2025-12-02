#include <stdio.h>
#include <ctype.h>

int my_islower(char param_1)
{
    if (islower(param_1)) {
    return 1;
    }
    else {
        return 0;
    }
}

// int main(){

//     printf("-> %c\n", my_islower('a'));
//     printf("-> %c\n", my_islower(' '));
//     printf("-> %c\n", my_islower('0'));
//     printf("-> %c\n", my_islower('A'));
//     printf("-> %c\n", my_islower('9'));

// }