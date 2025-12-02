#include <unistd.h>
#include <ctype.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_alphabet()
{
    char alpha;
    for (alpha='a'; alpha <='z';alpha++)
    {
        my_putchar(alpha);
    }
    my_putchar('\n');
    
}

// int main() {
//     my_print_alphabet();
//     return 0;
// }