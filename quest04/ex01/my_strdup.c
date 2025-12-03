#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_strdup(char* param_1)
{
    if(param_1 == NULL)
    {
        return NULL;
    }

    int str_length = strlen(param_1);
    char *new_string = (char *) malloc ((str_length + 1) * sizeof(char));
    
    if (new_string == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < str_length;i++)
    {
        new_string[i] = param_1[i];
    } 
    
    return new_string;

}


// int main()
// {
//     char str1[] = "abc";
//     char *copied_str = my_strdup(str1);
//     printf("copied string: %s",copied_str);
//     free(copied_str);
//     return 0;
// }
