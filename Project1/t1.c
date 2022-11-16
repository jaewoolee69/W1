#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>    // strcmp 함수가 선언된 헤더 파일




int main() {

    
   /* char str[4] = "abc";
    

    printf("%p\n", str);
    printf("%p\n", &str[0]);
    printf("%p\n", &(str[1]));

    printf("%c\n", *&(str[1]));
    */
    
    
    
    
    int m = 77;
    
    int* p2 = &m;

    int** p1 = &p2;

    

    printf("%u\n", *&p2[0]);



    /*printf("m의  주소값:   %u\n", &m);
    printf("p2의  값   :   %u\n", p2);
    
    printf("p2의 주소값:   %u\n", &*(p2));
    printf("p1의 값    :   %u\n", p1);*/


    





    
}
