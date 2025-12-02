#include <stdio.h>
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{

    if(param_1->size <= 1) {
        return true;
    }

    bool asc = true, desc = true;
    for(int i = 1; i < param_1->size; i++) {
        if(param_1->array[i] < param_1->array[i-1]) {
            asc = false;
        }
        if(param_1->array[i] > param_1->array[i-1]) {
            desc = false;
        }
    }
    return asc || desc;

}

// int main() {
//     int arr[] = {1, 1, 2};
//     integer_array int_arr;
//     int_arr.size = sizeof(arr) / sizeof(arr[0]);
//     int_arr.array = arr;
//     bool sorted = my_is_sort(&int_arr);
//     printf("Sorted: %s\n", sorted ? "true" : "false");
//     return 0;
// }