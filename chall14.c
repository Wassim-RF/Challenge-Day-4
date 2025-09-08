#include <stdio.h>

int main() {
    int num , i , sum = 0;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &num);
    int numbers[num];
    for (i = 0; i < num; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("Votre nombre sont : ");
    for (i = 0 ; i < num ; i++) {
        printf("%d " , numbers[i]);
    }
    printf("Le moyenne est : %d"  , sum / num);
    return 0;
}
