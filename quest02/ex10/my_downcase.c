#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* my_downcase(char* param_1)
{
    int i = 0;

    while (param_1[i] != '\0')
    {
        if(param_1[i] >= 'A' && param_1[i] <= 'Z')
        {
            param_1[i] = param_1[i] + 32;

        }
        i++;        
    }
    return param_1;
}

// int main() {
//   char *my_str = strdup("AbcE Fgef1");
  
//   printf("RANDOM CASE -> %s\n", my_str);
//   printf("DOWNCASE    -> %s\n", my_downcase(my_str));
//   return 0;
// }