#include <unistd.h>
#include <ctype.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_putstr(char* param_1)
{
    char *p = param_1;
    while (*p != '\0')
    {
        my_putchar(*p);
        p++;
    }
    return;

}

// int main()
// {
//     // char str1[] = "abc";
//     // char str1[] = "";
//     char str1[] = "abcdelele dzp ll 0";

//     my_putstr(str1);

//     return 0;
    
// }