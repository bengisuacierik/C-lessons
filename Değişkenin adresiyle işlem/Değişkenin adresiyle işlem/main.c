#include <stdlib.h>
#include <stdio.h>

void kare(int *sonuc,int *sayi)
{
    *sonuc=(*sayi)*(*sayi);
}


int main(void)
{
    int x=10 ,sonuc;
    
    kare(&sonuc,&x);
    
    printf("%d",sonuc);
    
    
    return(0);
}

