#include <stdio.h>

int main(){
    
    int son = -15;  // int malumot son = -15ga;
    float butun = 1.5;  //float malumot turi butun = 1.5ga;
    
    // printf("son: %d", son);   //son {int malumot turi uzgaruvchsi: son}ni  chopet;
    // printf("\nButun son: %.1f", butun);   //chopet 'Butun son ' + float m.turidagi butun o'zgaruvchsini qoldiq qismni 1ta raqamini chiqar;

    butun = 3.6;
    son = 15;

    // printf("\nson: %d", son);
    // printf("\nButun son: %.100f", butun);

    printf("son + butun = %.1f", butun+son);

    int qush = butun + son;
    printf("\n%d", qush);


    return 0;
}