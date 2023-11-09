#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args; /* declare a va_list object */
    char c; /* declare a char variable */
    int i = 0; /* declare an int variable */

    va_start(args, format); /* initialize the va_list object with the first fixed argument */
    while (format[i] != '\0') /* loop over the format string */
    {
        c = format[i]; /* assign the current character to the char variable */
        i++; /* increment the index variable */
        if (c == 'c' || c == 'i' || c == 'f' || c == 's') /* check if the current character is a valid type */
        {
            switch (c) /* handle each type separately */
            {
                case 'c': /* if the type is char */
                    printf("%c", va_arg(args, int)); /* get the next argument as an int and print it as a char */
                    break; /* exit the switch statement */
                case 'i': /* if the type is int */
                    printf("%d", va_arg(args, int)); /* get the next argument as an int and print it as an int */
                    break; /* exit the switch statement */
                case 'f': /* if the type is float */
                    printf("%f", va_arg(args, double)); /* get the next argument as a double and print it as a float */
                    break; /* exit the switch statement */
                case 's': /* if the type is string */
                    char *s = va_arg(args, char *); /* get the next argument as a char * and assign it to a char * variable */
                    if (s == NULL) /* check if the string is NULL */
                        s = "(nil)"; /* assign "(nil)" to the char * variable */
                    printf("%s", s); /* print the char * variable as a string */
                    break; /* exit the switch statement */
            }
        }
        else /* handle any other character */
        {
            continue; /* ignore the character and continue the loop */
        }
    }
    va_end(args); /* clean up the va_list object */
    printf("\n"); /* print a new line */
}
