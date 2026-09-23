#include <stdio.h>
int main() {
    float m, p, c, e, cm;
    printf("Enter Mathematics, Physics, Chemistry and Entrance marks: ");
    scanf("%f%f%f%f", &m, &p, &c, &e);
    cm = m / 2.0f + p / 2.0f + c / 2.0f + e;
    printf("Cut-off Mark = %.2f\n", cm);
    return 0;
}
