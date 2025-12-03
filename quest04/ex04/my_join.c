#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* param_1, char* param_2)
{
    if(param_1 == NULL || param_1->size == 0)
    { 
        return NULL;
    }

    if (param_2 == NULL)
    {
        param_2 = "";
    }

    int total_len = 0;

    for (int i=0;i<param_1->size;i++)
    {
        total_len = total_len + strlen(param_1->array[i]);
    }

    int sep_len = strlen(param_2);
    total_len = total_len + sep_len * (param_1->size - 1);

    total_len = total_len + 1;

    char* result_str = (char*) malloc(sizeof(total_len));

    if(result_str == NULL)
    {
        return NULL;
    }

    strcpy(result_str, param_1->array[0]);

    for(int i=1; i<param_1->size;i++)
    {
        strcat(result_str,param_2);
        strcat(result_str, param_1->array[i]);

    }
    return result_str;
}

// int main ()
// {
//     // char* input_array[] = {"abc", "def", "gh", "!"};
//     // char* sep = "-";
//     char* input_array[] = {"abc", "def", "gh", "!"};
//     char* sep = "blah";
//     string_array arr1;
//     arr1.size = 4;
//     arr1.array = input_array;
//     char* res_str = my_join(&arr1, sep);
//     if(res_str)
//     {
//         printf("%s\n", res_str);
//         free(res_str);
//     }
//     else {
//         printf("Memory Allocation Failed\n");
//     }
    
//     return 0;
// }