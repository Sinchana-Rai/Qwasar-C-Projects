#include <stdio.h>
char* my_strrchr(char* param_1, char param_2)
{
    int i = 0;
    char *last_match = NULL;

    while(param_1[i] != '\0')
    {
        if(param_1[i] == param_2)
        {
            last_match = &param_1[i];
        }
        i++;
    }
    return last_match;
}

// int main() {
//   char *s1 = "abcabc";
//   char s2 = 'b';
  
//   printf("my_strcpy -> %s\n", my_strrchr(s1, s2));
//   return 0;
// }