#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase\n");
    else
        printf("Not uppercase\n");
    return 0;
}
