#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *con;
    char *cat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    con = string_nconcat("Best ", "", 6);
    printf("%s\n", con);
    cat = string_nconcat("Best ", "School !!!", 10);
    printf("%s\n", cat);
    free(concat);
    free(con);
    free(cat);
    return (0);
}
