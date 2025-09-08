#include <stdio.h>

int main() {
    int num , i;
    int n;
    int ansewr = 0;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &num);
    int numbers[num];
    for (i = 0; i < num; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Entrer le nombre que tu chercher : ");
    scanf("%d" , &n);
    for (i = 0 ; i < num ; i++) {
        if (n != numbers[i]) {
            ansewr++;
        }
    }
    if (ansewr != 5) {
        printf("Le nombre est dans le tableaux.");
    } else {
        printf("Le nombre n'est pas existe.");
    }
    return 0;
}