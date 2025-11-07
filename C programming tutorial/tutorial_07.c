#include <stdio.h>
int main(){
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1: printf("The number you entered 1");
        /* code */
        break;
    
    default: printf("You another number");
        break;
    }
    return 0;
}