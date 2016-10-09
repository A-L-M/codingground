#include <stdio.h>

int main()
{
    char A, *ptr_A;
    char B, *ptr_B;
    char x;
    A = 'C';
    B = 'D';
    
    printf("A:dirección = 0x%p, contenido = %c\n",&A,A);
    printf("B:dirección = 0x%p, contenido = %c\n",&B,B);
    
    ptr_A = &A;
    ptr_B = &B;
    
    printf("ptr_A:dirección = 0x%p, *ptr_A:contenido = %c\n",ptr_A,*ptr_A);
    printf("ptr_B:dirección = 0x%p, *ptr_B:contenido = %c\n",ptr_B,*ptr_B);
    
    *ptr_A = 'D';
    *ptr_B = 'C';
    
    printf("A:dirección = 0x%p, contenido = %c\n",&A,A);
    printf("B:dirección = 0x%p, contenido = %c\n",&B,B);

    return 0;
}

