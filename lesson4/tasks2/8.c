#include <stdio.h>

//a soni berilgan. Berilgan son 5 ga bo'linadimi? Agar bo'linsa  konsolga true bo'lmasa false chiqaring.

int main(){
    int number;
    
    printf("Enter number\n>>>");
    scanf("%d", &number);

    if(number % 5 == 0){
        printf("\nTrue\n");
    }
    else{
        printf("\nFalse\n");
    }

    return 0;
}