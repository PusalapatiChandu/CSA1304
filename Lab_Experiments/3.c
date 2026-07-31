#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (len >= 2 && str[0] == '0' && str[len - 1] == '1')
        printf("String belongs to CFG.\n");
    else
        printf("String does not belong to CFG.\n");

    return 0;
}


// S → 0A1
//A → 0A | 1A | ε