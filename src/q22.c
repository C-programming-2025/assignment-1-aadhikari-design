#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result = %d\n", (int)round(sqrt(a + b)));
    return 0;
}
