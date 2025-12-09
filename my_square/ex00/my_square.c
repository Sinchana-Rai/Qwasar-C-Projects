#include <stdio.h>
#include <stdlib.h>


void my_square(int x, int y){
    if (x < 1 || y < 1) 
    {
        return;
    }


    if(x==1)
    {
        printf("o\n");
        for(int j=0;j< y-2;j++)
        {
            printf("|\n");
        }
        if (y > 1) {
            printf("o\n");
        }
        return;
    }

    printf("o");
    for(int i=0;i < x-2;i++)
    {
        printf("-");
    }
    printf("o\n");

    for(int j=0;j < y-2;j++)
    {
        printf("|");
        for(int i=0;i<x-2;i++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    if (y > 1) {
        printf("o");
        for (int i = 0; i < x - 2; i++) {
            printf("-");
        }
        printf("o\n");
    }

}

int main(int ac , char **av)
{
    if (ac != 3) {
        // printf("Incorrect arguments. Enter Width and Height\n");
        return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    my_square(x, y);
    return 0;
}