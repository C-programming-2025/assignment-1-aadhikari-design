#include <stdio.h>
int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    x = (x + 1) * 3 - 10;
    printf("Result = %d\n", x);
    return 0;
}
