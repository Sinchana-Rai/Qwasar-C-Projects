#include <stdio.h>

// Method 1: By allocating a memory for the string
// int main() {
//   char my_string[] = "Learning is growing";

//   printf("%s\n", my_string);
//   return 0;
// }

// Method2: using * which points to the starting address of a string and string can be accessed with the help of pointer

int main() {
  char *my_string = "Learning is growing";

  printf("%s\n", my_string);
  return 0;
}