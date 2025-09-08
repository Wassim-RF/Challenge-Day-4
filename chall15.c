#include <stdio.h>

int main() {
    int num1, num2, i;
    printf("Entrer la taille du tableau 1 : ");
    scanf("%d", &num1);
    int numbers1[num1];
    for (i = 0; i < num1; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers1[i]);
    }
    printf("Entrer la taille du tableau 2 : ");
    scanf("%d", &num2);
    int numbers2[num2];
    for (i = 0; i < num2; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers2[i]);
    }
    int numbers[num1 + num2];
    for (i = 0; i < num1; i++) {
        numbers[i] = numbers1[i];
    }
    for (i = 0; i < num2; i++) {
        numbers[num1 + i] = numbers2[i];
    }
    printf("Le grand tableau est : ");
    for (i = 0; i < num1 + num2; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
