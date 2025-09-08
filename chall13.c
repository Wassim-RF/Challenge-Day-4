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
    for (i = 0; i < num; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d est impair.\n" , numbers[i]);
        }
    }
    return 0;
}
