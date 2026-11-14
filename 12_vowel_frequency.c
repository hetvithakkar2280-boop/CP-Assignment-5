#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], ch;
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i < strlen(str); i++) {
        ch = tolower(str[i]);
        if (ch == 'a')
            a++;
        else if (ch == 'e')
            e++;
        else if (ch == 'i')
            in++;
        else if (ch == 'o')
            o++;
        else if (ch == 'u')
            u++;
    }
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", in);
    printf("o = %d\n", o);
    printf("u = %d\n", u);
    return 0;
}
