//değişkenin değeriyle işlem//


#include <stdio.h>
#include <stdlib.h>



int kare(int can)
{
    int sonuc=can*can;
    return sonuc ; //fonksiyonu yolladığım yer return ettiğim yere eşit//
    
}


int main(void)
{
    
    int x=4,karesi;
    
    karesi=kare(x);//fonksiyonu yolladığım yer return ettiğim yere eşit//
    
    printf("%d\n", karesi);
    
    return(0);
    
}



//Ben burada bir değer gönderdim. ve bu değeri return etmek zorundayım bu metot ile. ama adres ile yollasaydım adresin gösterdiği değer olarak tutacaktım . return e ihtiyacım olmayacak. ve return diye bir şeyim olmadığı için fonksiyonun tipini yazmak zorunda değilim void yazmalıyım. eşitleyeceğim şeyi tekrar main in içinde adresi ile yollamam gerekiyor bu yuzden  main in içinde int sonucum diye bir değişken tanımlıyoruz. bu değişkeni yine main in içindeki fonksiyonda adresi ile yolluyoruz.adresi ile yolladığım için adresin gösterdiği değeri fonksiyonun içinde almam lazım. void kare( int *sonuc, int *can) şeklinde fonksiyonu yazıyoruz. fonksiyonun içine *sonuc= (*can) * (*can) a eşitliyoruz. sonra main de printf ile sonucum u bastırıyoruz.//
