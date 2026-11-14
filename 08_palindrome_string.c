#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    for (i = 0; i < len; i++)
        rev[i] = str[len - 1 - i];
    rev[len] = '\0';

    if (strcmp(str, rev) == 0)
        printf("\"%s\" is a palindrome string.\n", str);
    else
        printf("\"%s\" is not a palindrome string.\n", str);
    return 0;
}
