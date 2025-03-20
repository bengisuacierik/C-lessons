#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void ustunu_al(int x,int y,int *r)
{
    *r=pow(x,y);
}


int main(void)
{
    int x=4 , y=5 , r ;
    ustunu_al(x,y,&r);
    printf("%d",r);
    return 0;
}
