#include <stdio.h>

int main() {
    int num, i, j, t;
    printf("Entrer le nombre des nombres que vous voulez : ");
    scanf("%d", &num);
    int numbers[num];
    for (i = 0; i < num; i++) {
        printf("Enter a number : ");
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                t = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = t;
            }
        }
    }
    printf("L'ordre croissant est : ");
    for (i = 0; i < num; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
