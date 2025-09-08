#include <stdio.h>

int main() {
    int num, i, temp;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &num);
    int inv[num];
    for (i = 0; i < num; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &inv[i]);
    }
    for (i = 0; i < num / 2; i++) {
        temp = inv[i];
        inv[i] = inv[num - i - 1];
        inv[num - i - 1] = temp;
    }
    printf("Tableau inverse : ");
    for (i = 0; i < num; i++) {
        printf("%d ", inv[i]);
    }
    return 0;
}
