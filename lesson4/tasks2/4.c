#include <stdio.h>

// 4.Sonning  juft  yoki  toqligini  aniqlang.  Agar  juft bo'lsa 'juft' so'zini return qiling. 
// Agar toq bo'lsa 'toq' so'zini return qiling.

int main(){
    int number;
    printf("Pleas enter a number\n>>>");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("\nThe number %d", number);
        printf(" is even!");
    }else{
        printf("\nThe number %d", number);
        printf(" is not even!\n ");
        }

    return 0;
}