#include <stdio.h>

int main() {
    int n;

    // Ask user for the limit N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d are:\n", n);
    
    // Loop through numbers and print odd ones
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
