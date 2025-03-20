#include <stdio.h>
#include <stdlib.h>

void tekmiciftmi(int can)  /*Geriye değer döndürmeyen fonksiyonlarda void kullanılır voidden sonra fonksiyonun adı aynen yazılır. Daha sonra fonksiyonun içine tipini yazmak zorundayız. can değeri sayi değerine eşit. illa sayi yazmak zorunda değilsin. */

{
    if(can%2==0)
        
    {
        printf("Sayimiz cift sayidir\n");
    }
    else
    {
        printf("Sayimiz tek sayidir\n");
    }
}

int main(void)

{
    int sayi;
    
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    
    tekmiciftmi(sayi);       //fonksiyonadı(göndermek istediğin sayı veya sayılar)//
    
    
    
    return 0;
    
}

/*
 İKİ TİP FONKSİYON VARDIR:
1-GERİYE DEĞER DÖNDÜRENLER
2-GERİYE DEĞER DÖNDÜRMEYENLER -----tipi-------> VOİD
 */

