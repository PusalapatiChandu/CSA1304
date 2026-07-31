#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}




//S → 0A1
//A → 0A | 1A | ε