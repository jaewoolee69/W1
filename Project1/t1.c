#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>    // strcmp �Լ��� ����� ��� ����




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



    /*printf("m��  �ּҰ�:   %u\n", &m);
    printf("p2��  ��   :   %u\n", p2);
    
    printf("p2�� �ּҰ�:   %u\n", &*(p2));
    printf("p1�� ��    :   %u\n", p1);*/


    





    
}
