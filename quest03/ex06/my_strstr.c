#include <stdio.h>

char* my_strstr(char* param_1, char* param_2)
{
    if (param_2[0] == '\0')
    {
         return param_1;
     }

    for (int i=0;param_1[i] != '\0';i++)
    {
        int j = 0;
        while(param_2[j] != '\0' && param_1[i + j] != '\0' && param_1[i + j] == param_2[j])
        {
            j++;
        }

        if(param_2[j] == '\0')
        {
            return &param_1[i];
        }
    }

    return NULL;
     
}

// int main() {
//   char *s1 = "mississippi";
//   char *s2 = "mississippii";
  
//   printf("my_strstr -> %s\n", my_strstr(s1, s2));
//   return 0;
// }