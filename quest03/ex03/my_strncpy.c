#include <stdio.h>

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    int i = 0;

    while(param_2[i] != '\0' && i < param_3)
    {
            param_1[i] = param_2[i];
            i++;
    }

    return param_1;
}


// int main() {
//   char dst[100] = {0};
//   char *src     = "RaInB0w d4Sh! ";
//   int n = 6;
  
//   printf("my_strcpy -> %s\n", my_strncpy(dst, src , n));
//   return 0;
// }