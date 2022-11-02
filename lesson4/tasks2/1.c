#include <stdio.h>

int main() {
// Berilgan son 10 dan katta bo'lsa unga 3 ni qo'shib konsolga chiqaring.
// Agar 10 dan kichik bo'lsa 2ga ko'paytirib natijani konsolga chiqaring.
// Agar 10 ga teng bo'lsa 22 sonini konsolga chiqaring.

    int son;
    printf("iltimos son kiriting\n>>>");  
    scanf("\n%d", &son);

    //printf("\nSiz kiritgan son %d", son);
    if(son < 10){  //Agar son katt 10 bo'lsa; 
        printf("\n%d", son);
        printf(" < 10 \n%d", son);
        printf(" + 3 = %d", son+3);
        
        
    }
    else if(son > 10){
        printf("\n%d", son);
        printf(" > 10\n%d", son);
        printf(" x 2 = %d", son*2);
    }
    else{
        printf("10 = 10\n22");
    }


    return 0;
   }