#include <stdio.h>

//  a va b sonlari berilgan.  Berilgan ikkita sondan kattasini konsolga chiqaring. 
//  Agar ular teng bo'lsa 'Voy ular teng' yozuvi chiqsin.

int main(){
    //Variables
    int number_a;
    int number_b;
    int number;

    //INPUT
    printf("Pleas enter first number:\n>>>");
    scanf("%d", &number_a);

    printf("\nPleas enter second number:\n>>>");
    scanf("%d", &number_b);

    //CONDITIO and PRINT
    if(number_a > number_b){
        number = number_a;
        printf("\n%d", number);
        printf(" is big!\n");
    }
    else if(number_a < number_b){
        number = number_b;
        printf("\n%d", number);
        printf(" is big!\n");
        } 
        else{
            printf("\nWow ther are equal!\n");
            }

    return 0;
}