#include <stdio.h>
// Berilgan a sonini 3ga bo'lgandagi butun  qismini b o'zgaruvchiga joylang va b sonini 
// konsolga chiqaring.


int main(){
    int a;
    printf("Pleas input number: \n>>>");
    scanf("%d", &a);
    // printf("\n%d", a);
    int b = a / 3;
    int c = a % 3;
    printf("%d", a);
    printf(" / 3 = ");
    printf("%d", b);
    printf("\nresudual : %d", c);

    return 0;
}