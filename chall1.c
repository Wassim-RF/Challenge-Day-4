#include <stdio.h>

int main() {
    int num[5] , i;
    for (i = 0 ; i < 5 ; i++) {
        printf("Enter a number : ");
        scanf("%d" , &num[i]);
    }
    printf("Votre numero sont : ");
    for (i = 0 ; i < 5 ; i++) {
        printf("%d " , num[i]);
    }
    return 0;
}