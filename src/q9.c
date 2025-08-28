#include <stdio.h>
int main() {
    int d;
    printf("Enter number of days: ");
    scanf("%d", &d);
    printf("%d days = %d week(s) and %d day(s)\n", d, d/7, d%7);
    return 0;
}
