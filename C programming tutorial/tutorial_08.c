#include <stdio.h>
int main(){
    //the matrix syntax a[row][column]
    int a[2][2]={{1,2},{1,2}};
    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            printf("%d ",a[i][j]);
        }
        
    }
    
    return 0;
}