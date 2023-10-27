#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive integer.
 * @str: The input string to check.
 * Return: 1 if positive integer, 0 otherwise.
 */
int is_positive_number(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }

    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }

    return 1;
}
/**
 * main - Check if a string is a positive integer.
 * @argc: The input string to check.
 * @argv: The input string to check.
 * Return: 1 if positive integer, 0 otherwise.
 */
int main(int argc, char *argv[]) {
    int sum = 0;
    int i;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++) {
        if (is_positive_number(argv[i])) {
            sum += atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}

