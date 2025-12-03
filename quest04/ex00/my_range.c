#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{
    if (param_1 >= param_2)
    {
        return NULL;
    }

    int arr_size = param_2 - param_1;
    int *int_arr = (int *)malloc(arr_size * sizeof(int));

    if(int_arr == NULL)
    {
        return NULL;
    }

    for(int i=0;i<arr_size;i++)
    {
        int_arr[i] = param_1 + i;
    }

    return int_arr;
    
}

// int main()
// {
//     int min = 1, max = 4;
//     int *arr = my_range(min, max);
//     if (arr != NULL)
//     {
//         for(int i=0;i < max-min;i++)
//         {
//             printf("%d" , arr[i]);
            
//         }
//     }

//     return 0;

// }
