#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
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


void my_print_words_array(string_array* param_1)
{
    if(param_1 == NULL || param_1->size == 0)
    {
        return;
    }

    for(int i=0;i<param_1->size;i++)
    {
        my_putstr(param_1-> array[i]);
        my_putstr("\n");
    }
}

// int main()
// {
//     char * input_words[] =  {"abc", "def", "gh"};
//     string_array arr;
//     arr.size = 3;
//     arr.array = input_words;
//     my_print_words_array(&arr);
//     return 0;
// }