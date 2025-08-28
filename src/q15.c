#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0 && num%2==0)
        printf("Positive and even\n");
    else
        printf("Not positive even\n");
    return 0;
}
