#include <stdio.h>

// Berilgan yill kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa true  konsolga chiqsin.  
// Agar bo'linmasa false  konsolga chiqsin. Kabisa yil deb 4 yilda birmarta keladigan 
// yilga aytiladi. Shu yili kunlar soni 365 emas 366 ga teng bo'ladi. Bu yili fevral oyida 
// 29 kun bo'ladi.

// Maslahat:
// Berilgan yil 4 ga  qoldiqsiz bo'lnishi kerak. Ammo u 100 bo'linmasligi kerak. 
// Agar yil 400 ga qo'ldiqsiz bo'linsa u ham kabisa yili  hisoblanadi. 
// Shu aytilgan shartlarni  dasturlash tiliga o'tkazsa bo'ladi.

int main(){
    int year;
    
    printf("Enter year\n>");
    scanf("%d", &year);

    if(year % 4 == 0 &&  && year % ){
        printf("\n%d", year);
        printf(" is leap year!");
    }
    else if(year % 100 != 0){
        printf("\n%d", year);
        printf(" is leap year!");       
    }
    else if(400 == 0){
        ""
    }
    else{
        printf("\n%d", year);
        printf(" is not leap year!\n");        
    }

    return 0;
}