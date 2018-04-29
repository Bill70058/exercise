#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int a[7] = {1,2,3,4,6};
    int i,j,m,temp;
    int x,y;
    int inset;
    printf("input a number:");
    scanf("%d",&inset);
    m = sizeof(a)/sizeof(int);
    //a[5] =  inset;
    /*
    for(i = 0; i < 5; i++)
    {
       // printf("%d\t", a[i]);
       for(j = 0; j < 6-i-1;j++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }

       }
    }
     for(i = 0; i < 6; i++)
        printf("%d\t", a[i]);
    */
    printf("\n%d", m);

}
