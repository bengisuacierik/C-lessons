#include <stdio.h>
#include <stdlib.h>

int main(void)  {
    
    int can[10] ;
    int i;
    
    for (i=0; i<=18; i++) {
        
        can[i]=2*i;
        
    }
    
    for (i=0; i<10; i++) {
        
        printf("%d\n",can[i]);
        
        
    }
    
    
    
    return(0);
}

