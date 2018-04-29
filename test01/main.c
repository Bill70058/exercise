#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3] = {1,2,3};
    int i,j;
    int x = 0,y = 0,z;//x:better,y:small

    for(i = 0; i < 3; i++)
    for(j = 0; j < 3;j++){
        if(a[i] > a[j]){
            x = a[i];
            a[i] = a[j];
            a[j] = x;
        }
        if(a[i] < a[j]){
            y = a[j];
            a[j] = a[i];
            a[i] = y;
        }
    }
    //printf("%d", z);
    printf("%d\t%d", x,y);




}
