#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b != c)
        printf("Condition true\n");
    else
        printf("Condition false\n");
    return 0;
}
