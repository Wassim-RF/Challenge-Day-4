#include <stdio.h>

int main() {
    int num , i;
    printf("Entrer le nombre des nombre qui tu veux : ");
    scanf("%d" , &num);
    int numbers[num];
    for (i = 0 ; i < num ; i++) {
        printf("Enter a number : ");
        scanf("%d" , &numbers[i]);
    }
    printf("Votre nombre sont : ");
    for (i = 0 ; i < num ; i++) {
        printf("%d " , numbers[i]);
    }
    return 0;
}