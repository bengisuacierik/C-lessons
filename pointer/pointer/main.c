#include <stdio.h>
#define MAX_SİZE 100
int main(void) {
    
    int arr[]={10,20,30,40,50};
    int *ptr;
    
    ptr=arr;
    ptr++;
    
    printf("%d\n",*(ptr));
    
    
    printf("%d\n",*(ptr+1));
    
    
    printf("%d\n",*(ptr+2));
    
    
    return 0;
}
