#include <stdio.h>
int main() {
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    printf("Average = %.2f\n", (x+y)/2.0);
    return 0;
}
