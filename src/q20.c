#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
        printf("Multiple of 3 or 5\n");
    else
        printf("Not multiple of 3 or 5\n");
    return 0;
}
