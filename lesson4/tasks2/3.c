#include <stdio.h>
// a soni berilgan. a sonini 3ga bo'lgandagi qoldig'ini kansolga chiqaring.
int main(){
    int  number;
    printf("Pleas enter number\n>>>");
    scanf("%d", &number);
    
    printf("\n%d", number);
    printf(" / 3 = %d", number / 3);
    printf("\nresudual: %d", number % 3);
    printf("\n");

    return 0;
}