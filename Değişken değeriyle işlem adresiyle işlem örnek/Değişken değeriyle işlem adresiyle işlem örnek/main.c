#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ustunu_al(int x,int y)
{
    int sonuc;
    sonuc = pow(x,y);
    return sonuc;
}




int main(void)
{
    int x=2 , y=2 ;
    int sonuc;
    sonuc = ustunu_al(x,y);
    printf("%d\n", sonuc);
    
    return(0);
}



