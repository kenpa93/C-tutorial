#include <stdio.h>
int main(){
    //this is a constant test
    int a=3;
    float b=2.3;
    char c='b';
    // now we practice the diff. print method
    /*%d is for int print
    %f is for  float
    %c is for character
    example =printf("%d",a); now we can print int with this syntax*/
    printf("integer %d \n",a);
    printf("float %f \n",b);
    printf("character %c \n ",c);
    //printf("the integer name ais %d,a");
    //this syntax can be used for control and make your 
    //output looks cool i think enjoy!
    printf("the integer inside name a which contains number %d",a);
    return 0;
}