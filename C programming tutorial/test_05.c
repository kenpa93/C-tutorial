#include <stdio.h>
int main(){
    char a[7]={'s','p','a','r','s','h'};
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%c",a[i]);
    }
    
    printf("%c",a[7]);
    return 0;
}