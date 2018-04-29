#include <stdio.h>
#include <stdlib.h>

int funtion()
{
        int *num;
        int i;
        num = calloc(5,sizeof(int));
        num[4] = 9;
        for(i = 0; i < 5; i++){
        printf("%d\n", num[i]);
        }
        free(num);
}
