#include <stdio.h>

// Berilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa konsolga 'true'  bo'lmasa falseni chiqaring.

int main(){
    int number;
    
    printf("Please enter number\n>");
    scanf("%d", &number);

    if(number % 3 == 0 && number % 4 == 0){
        printf("True");
    }
    else{
        printf("False");
    }
}
