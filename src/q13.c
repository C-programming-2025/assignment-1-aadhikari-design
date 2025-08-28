#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num/2*2==num && num/3*3==num)
        printf("Divisible by both 2 and 3\n");
    else
        printf("Not divisible by both 2 and 3\n");
    return 0;
}
