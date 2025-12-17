#include <stdio.h>
#include <unistd.h>   
#include <stdarg.h> 
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int print_integer(int num)
{
    char buff[12];
    int i = 0, count = 0;
    unsigned int u;

    if (num < 0) {
        count += write(1, "-", 1);
        u = (unsigned int)(-(long)num);
    } else {
        u = (unsigned int)num;
    }

    do {
        buff[i++] = '0' + (u % 10);
        u /= 10;
    } while (u > 0);

    while (i--) {
        count += write(1, &buff[i], 1);
    }
    return count;
}

int print_string(char *s)
{
    int count = 0;
    if(!s) {
        s = "(null)";
    }
    count = write(1, s, strlen(s));
    return count;
}

int print_char(char c)
{
    return write(1, &c, 1);
}

int print_octal(unsigned int o)
{
    char buff[10];
    int i = 0, count = 0;

    do {
        buff[i++] = '0' + (o % 8);
        o /= 8;
    } while (o > 0);

    while (i--) {
        count += write(1, &buff[i], 1);
    }
    return count;
}
    
int print_hexa(unsigned int h)
{
    char buff[10];
    int i = 0, count = 0;

    const char *hex = "0123456789ABCDEF";

    if (h == 0) {
        return write(1, "0", 1);
    }

    while (h > 0) {
        int digit = h % 16;
        buff[i++] = hex[digit];
        h /= 16;
    }

    while (i--) {
        count += write(1, &buff[i], 1);
    }
    return count;
}

int print_unsigned_int(unsigned int ui) 
{
    char buff[10];
    int i = 0, count = 0;

    do { 
        buff[i++] = '0' + (ui % 10);
        ui /= 10;
    } while (ui > 0);
    
    while (i--)
    {
        count += write(1, &buff[i], 1);
    }
    return count;
}

int print_pointer(const void *ptr)
{
    uintptr_t value = (uintptr_t)ptr;            
    char buff[2 * sizeof(uintptr_t)];            
    int i = 0, count = 0;
    const char *hex = "0123456789abcdef";

    count += write(1, "0x", 2);

    if (value == 0) {
        count += write(1, "0", 1);
        return count;
    }

    while (value > 0) {
        buff[i++] = hex[value & 0xF];
        value >>= 4;
    }

    while (i--) {
        count += write(1, &buff[i], 1);
    }
    return count;
}

int my_printf(char * restrict format, ...)
{
    va_list ap;
    va_start(ap, format);
    int total = 0;

    for(int i=0;format[i];i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
            case 'd':
                total += print_integer(va_arg(ap , int));
                break;
            case 'c':
                total += print_char(va_arg(ap, int));
                break;
            case 's':
                total += print_string(va_arg(ap, char *));
                break;
            case 'o':
                total += print_octal(va_arg(ap ,unsigned int));
                break;
            case 'x':
                total += print_hexa(va_arg(ap ,unsigned int));
                break;
            case 'X':
                total += print_hexa(va_arg(ap ,unsigned int));
                break;
            case 'u':
                total += print_unsigned_int(va_arg(ap ,unsigned int));
                break;
            case 'p':
                total += print_pointer(va_arg(ap ,void *));
                break;
            case '%':
                total += write(1, "%", 1);
                break;
            default:
                total += write(1, "%", 1);
                total += write(1, &format[i], 1);
                break;
            }
        } else {
            total += write(1, &format[i], 1);
        }
    }

    va_end(ap);
    return total;
}

int main()
{
    my_printf("String: %s\n","Hello World");
    my_printf("Integer: %d\n", 33);
    my_printf("Char: %c%c \n", 'H', 'i');
    my_printf("Unsigned Int: %u\n", 55);
    my_printf("Octal value: %o\n", 33);
    my_printf("Hexa value: %x\n", 100u);
    my_printf("Hexa value: %X\n", 3333u);

    int x = 42;
    my_printf("Pointer: %p\n", (void*)&x);
    return 0;
}
