#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (sqrt(num) == (int)sqrt(num))
        printf("Perfect square\n");
    else
        printf("Not perfect square\n");
    return 0;
}
