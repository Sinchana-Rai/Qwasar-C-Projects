#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1)
{
    int stLen = strlen(param_1);
    char revString;
    int leftptr = 0;
    int rightptr = stLen -1;
    
    while (leftptr < rightptr)
    {
        revString = param_1[leftptr];
        param_1[leftptr] = param_1[rightptr];
        param_1[rightptr] = revString;

        leftptr++;
        rightptr--;

    }


    return param_1;
}


// int main() {
//   char my_str[] = "Hello";
  
//   printf("Before reverse -> %s.\n", my_str);
//   printf("Reverse -> %s.\n", reverse_string(my_str));
//   return 0;
// }

