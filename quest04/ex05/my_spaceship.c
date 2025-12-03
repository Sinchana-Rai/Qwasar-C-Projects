#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0;
    char dir[6] = "up";

    for (int i= 0; i < strlen(param_1);i++)
    {
        char turning_side = param_1[i];

// When direction of spaceship is R 
        if(turning_side == 'R')
        {
            if(strcmp(dir,"up") == 0)
            {
                strcpy(dir, "right");
            }
            else if (strcmp(dir, "right") == 0)
            { 
                strcpy(dir, "down"); 
            }
            else if (strcmp(dir, "down") == 0)
            { 
                strcpy(dir, "left"); 
            }
            else if (strcmp(dir, "left") == 0)
            { 
                strcpy(dir, "up"); 
            }
        }

// When the direction of spaceship is L
        else if (turning_side == 'L')
        {
            if (strcmp(dir, "up") == 0)
            { 
                strcpy(dir, "left"); 
            }
            else if (strcmp(dir, "left") == 0)
            { 
                strcpy(dir, "down"); 
            }
            else if (strcmp(dir, "down") == 0)
            { 
                strcpy(dir, "right"); 
            }
            else if (strcmp(dir, "right") == 0)
            { 
                strcpy(dir, "up"); 
            }
        }
// When spaceship has to Advance ie A

        else if (turning_side == 'A') {
         if (strcmp(dir, "up") == 0)
            { 
                y -=1;
            }
         else if (strcmp(dir, "down") == 0)
            { 
                y +=1;
            } 
         else if (strcmp(dir, "right") == 0)
            { 
                x +=1;
            } 
         else if (strcmp(dir, "left") == 0)
            { 
                x -=1;
            }    
        }

    }

    char* result = malloc(100);

    if (!result)
    {
        return NULL;
    }

    snprintf(result, 100, "{x: %d, y: %d, direction: '%s'}" , x, y, dir);
    return result;

}

// int main()
// {
//     // char* input_str = "RAALALL";
//     char* input_str = "RAARA";
//     char* result = my_spaceship(input_str);

//     if(result) {
//         printf("Result: %s\n", result);
//         free(result);
//     }
//     else {
//         printf("Memory Allocation Failed.\n");
//     }

//     return 0;
// }