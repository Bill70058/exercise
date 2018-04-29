#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j;
    int x,y;
    int max,min,temp;
    int a[5];
    int b[5];
    printf("plese input five numbers:");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for(i = 0; i < 4; i++)
    for(j = 0; j < 5-i-1;j++)
    {
            if(a[j]>a[j+1])
            {
                temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }


    }
    min = a[0];
    max = a[4];
    for(i = 0; i < 5; i++)
    {
        if(b[i] == min)
            x = i;
        if(b[i] == max)
            y = i;
    }
    temp = b[x];
    b[x] = b[y];
    b[y] = temp;
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);

    }
     printf("\n");
    for(i = 0; i < 5; i++)
    {

        printf("%d\t", b[i]);
    }
}

