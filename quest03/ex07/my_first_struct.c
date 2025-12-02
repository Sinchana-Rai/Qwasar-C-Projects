#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1)
{
    printf("%d\n", param_1->size);
    for(int i=0; i < param_1->size; i++) {
        printf("%d\n", param_1->array[i]);
    }

}

// int main() {
//     int arr[] = {10, 2, 3, 3, 0, -1};
//     integer_array int_arr;
//     int_arr.size = sizeof(arr) / sizeof(arr[0]);
//     int_arr.array=arr;
//     my_first_struct(&int_arr);
//     return 0;
// }