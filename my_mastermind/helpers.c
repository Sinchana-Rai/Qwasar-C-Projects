#include "my_mastermind.h"

void my_putchar(char c) 
{ 
    write(1, &c, 1);
}

void my_putstr(const char *str) {
    if (!str)
    { 
        return;
    }
    while (*str) 
    {
        my_putchar(*str++);
    }
}


int my_strlen(const char *s) {
    int len = 0;
    if (!s)
    { return 0;
    }

    while (s[len] != '\0')
    {
         len++;
    }
    return len;
}