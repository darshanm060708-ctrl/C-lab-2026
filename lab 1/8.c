#include <stdio.h>
int main() {
    long seconds = 31558150;
    long days, hours, minutes;
    seconds %= 86400;
    days = 31558150 / 86400;
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    printf("Days = %ld\nHours = %ld\nMinutes = %ld\n", days, hours, minutes);
    return 0;
}
