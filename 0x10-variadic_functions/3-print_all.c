#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char current_char;

    va_start(args, format);

    while (format && format[i])
    {
        current_char = format[i];
        switch (current_char)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
        }

        if ((format[i + 1]) && (current_char == 'c' || current_char == 'i' || current_char == 'f' || current_char == 's'))
            printf(", ");

        i++;
    }

    printf("\n");
    va_end(args);
}

