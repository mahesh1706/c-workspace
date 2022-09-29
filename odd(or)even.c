#include <stdio.h>
int main() {
    int value;
    printf("Enter an integer: ");
    scanf("%d", &value);
    if(value % 2 == 0)
        printf("%d is even.", value);
    else
        printf("%d is odd.", value);
    
    return 0;
}
