#include <stdio.h>

int main() {
    int numo[5];
    int fuc;
    int numf[5];
    int i;
    for (i = 0 ; i < 5 ; i++) {
        printf("Enter a number : ");
        scanf("%d" , &numo[i]);
    }
    printf("Entre le nombre de facteur : ");
    scanf("%d" , &fuc);
    printf("Les nombre avec le facteur sont : ");
    for (i = 0  ; i < 5 ; i++) {
        numf[i] = numo[i] * fuc;
        printf("%d " , numf[i]);
    }
    return 0;
}