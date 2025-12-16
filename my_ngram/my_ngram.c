#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128
int my_strlen(char *str)
{
    int index = 0;

    while(str[index] != '\0')
    {
        index += 1;
    }
    return index;
}

void fill_array(char* array, char* str)
{
    int index = 0;
    while(str[index] != '\0')
    {
        if(str[index] != '"') {
            array[(unsigned char)str[index]] += 1;
        }
        index += 1;
    }
}

void print_array(char* array) {
   
    if(array[' '] > 0) {
        printf(" :%d\n", array[' ']);
    }

    if(array[','] > 0) {
        printf(",:%d\n",array[',']);
    }

    if(array['.'] > 0) {
        printf(".:%d\n",array['.']);
    }
    
    for (int index = 'A'; index <= 'Z'; index++) {
        if(array[index] > 0) {
            printf("%c:%d\n", (char)index, array[index]);
        }
    }
    for (int index = 'a'; index <= 'z'; index++) {
        if(array[index] > 0) {
            printf("%c:%d\n", (char)index, array[index]);
        }
    }
}

int main(int ac, char** av)
{
    int index = 1;
    char array[MAX_ARRAY_SIZE] = {0};
    while(index < ac) {
        fill_array(&array[0] , av[index]);
        index += 1;
    }
    print_array(&array[0]);
    return EXIT_SUCCESS;
}