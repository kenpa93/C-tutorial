#include <stdio.h>
int main(){
    int a=0,b;
    char c[50];
    printf("Tell me how much alphabets you put in \n");
    scanf("%d",&a);
    printf("Enter your alphabets \n");
    for( b = 0; b <= a; b++)
    {
        /* code */
        scanf("%c",&c[b]);
    }
    for (b = 0; b <= a; b++)
    {
        /* code */
        printf("%c",c[b]);
    }
    return 0;
}