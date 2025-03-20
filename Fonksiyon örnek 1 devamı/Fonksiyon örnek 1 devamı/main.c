#include <stdio.h>
#include <stdlib.h>


/*Klavyeden girilen iki tamsayının toplamını,farkını,çarpımını ve bölümünü gerçekleştiren C programını fonksiyon kullanmadan ve fonksiyon kullanara yazınız.*/

float dortislem(float sayi1, float sayi2 , char islem)
{
    
    if(islem == '+')
    {
        return sayi1+sayi2;
    }
    
    else if(islem == '-')
    {
        return sayi1-sayi2;
    }
    else if(islem == '*')
    {
        return sayi1*sayi2;
    }
    else if(islem == '/')
    {
        return sayi1/sayi2;
    }
    else
    {
        printf("Yanlış operatör girdiniz\n");
        return -1;
    }
    
}

int main (void)

{
    float sayi1,sayi2;
    char islem;
    
    printf("Hangi işlemi yaptırmak istiyorsunuz (+,-,*,/) \n");
    scanf("%c",&islem);
    
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);
    
    printf("Islemin sonucu %.2f\n",dortislem(sayi1,sayi2,islem));
    
  
    
    return (0) ;
}
 



