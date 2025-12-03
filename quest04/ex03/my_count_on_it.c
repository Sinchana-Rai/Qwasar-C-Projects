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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
{
    integer_array* res_intarr = (integer_array*) malloc (sizeof(integer_array));

    if(res_intarr == NULL)
    {
        return NULL;
    }

    res_intarr->size = param_1->size;

    res_intarr->array = (int*)malloc(sizeof(int) * param_1->size);

    for(int i=0;i<param_1->size;i++)
    {
        int str_len = strlen(param_1->array[i]);
        res_intarr->array[i] = str_len;

    }

    return res_intarr;

}

// int main()
// {
//     char* input_array[] = {"aBc", "AbcE Fgef1"};
//     string_array arr1;
//     arr1.size = 2;
//     arr1.array = input_array;

//     integer_array* arr2 = my_count_on_it(&arr1);

//     for (int i = 0;i<arr2->size;i++)
//     {
//         printf("%d ", arr2->array[i]);

//     }

//     free(arr2->array);
//     free(arr2);

//     return 0;

// }