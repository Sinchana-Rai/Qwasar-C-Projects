#include <stdio.h>
char* my_strchr(char* param_1, char param_2)
{
    int i = 0;

    while(param_1[i] != '\0')
    {
        if(param_1[i] == param_2)
        {
            return &param_1[i];
        }
        i++;
    }
    return NULL;
}

// int main() {
//   char *s1 = "abcabc";
//   char s2 = 'b';
  
//   printf("my_strcpy -> %s\n", my_strchr(s1, s2));
//   return 0;
// }