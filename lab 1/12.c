#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII code = %d\n", (unsigned char)ch);
    return 0;
}
