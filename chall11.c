#include <stdio.h>

int main() {
    int num , i;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &num);
    int numbers[num];
    for (i = 0; i < num; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Votre nombres est : ");
    for (i = 0; i < num; i++) {
        printf("%d " , numbers[i]);
    }
    printf("\nEntrer les nouvelle nombre : ");
    for (i = 0; i < num; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nVotre nouvelle nombre : ");
    for (i = 0; i < num; i++) {
        printf("%d " , numbers[i]);
    }
    return 0;
}