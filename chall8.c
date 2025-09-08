#include <stdio.h>

int main() {
    int num1[5] , num2[5] , i;
    for (i = 0 ; i < 5 ; i++) {
        printf("Enter a number : ");
        scanf("%d" , &num1[i]);
    }
    for (i = 0 ; i < 5 ; i++) {
        num2[i] = num1[i];
    }
    printf("Le 1er tableaux : ");
    for (i = 0 ; i < 5 ; i++) {
        printf("%d " , num1[i]);
    }
    printf("Le 2eme tableaux : ");
    for (i = 0 ; i < 5 ; i++) {
        printf("%d " , num2[i]);
    }
    return 0;
}