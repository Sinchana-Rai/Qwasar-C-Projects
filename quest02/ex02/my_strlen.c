#include <stdio.h>
// #include <string.h>

int my_strlen(char* param_1)
{
//  Using strlen()

    // size_t length;
    // length = strlen(param_1);
    // return length;

// Not using strlen();

    int length = 0;
    while(param_1[length] != '\0') 
    {
        length++;
    }
    return length;
}


// int main()
// {
//     // char str1[] = "abc";
//     char str1[] = "RaInB0w d4Sh!";
//     // char str1[] = "ThE C4k3 Is a L|3";
    

//     printf("Length of string is : %d\n",my_strlen(str1));
//     return 0;
    
// }