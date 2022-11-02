#include <stdio.h>

#include <stdio.h>

// a, b, c  sonlari berilgan.  Shu sonlardan eng kattasini toping.

int main(){
    //Variables
    int number_a;
    int number_b;
    int number_c;
    int number;

    //INPUT
    printf("Pleas enter 1st number:\n>>>");
    scanf("%d", &number_a);

    printf("\nPleas enter 2nd number:\n>>>");
    scanf("%d", &number_b);

    printf("\nPleas enter 3th number:\n>>>");
    scanf("%d", &number_c);

    //CONDITIO and PRINT
    if(number_a > number_b && number_a > number_c){
        number = number_a;
        printf("\n%d", number);
        printf(" is big!\n");
    }
    else if(number_b > number_a && number_b > number_c){
        number = number_b;
        printf("\n%d", number);
        printf(" is big!\n");
        }
    else if(number_c > number_a && number_c > number_b){
        number = number_c;
        printf("\n%d", number);
        printf(" is big!\n");
    }
    else{
        printf("\nWow ther are equal!\n");
    }

    return 0;
}

