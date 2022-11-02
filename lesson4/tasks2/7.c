#include <stdio.h>

// a soni berilgan. Sonning musbat yoki manfiy ekanligini aniqlang. Son 0 ga teng bo'lsa, 0 ni konsolga chiqaring.

int main(){
    //VARIABLES
    int number;

    //INPUT
    printf("Pleas enter number \n>>>");
    scanf("%d", &number);

    //Condition
    if(number > 0){
        printf("\n%d", number);
        printf("is positive!\n");
    }
    else if (number < 0){
        printf("\n%d", number);
        printf("is positive!\n");
    }
    else{
        printf("\n0\n");
    }

    return 0;
} 