#include <stdio.h>

int main() {
    int num , i;
    int max = 0;
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
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("\nLe plus grannd nombre est : %d.\n" , max);
    return 0;
}