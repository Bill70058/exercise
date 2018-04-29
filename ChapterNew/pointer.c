#include <stdio.h>
#include <stdlib.h>

int pointer()
{
    int num = 9;
    int *ptr_num;
    int **ptr_num2;
    ptr_num = &num;
    ptr_num2 = &ptr_num;
    printf("%d\t%d", *ptr_num,**ptr_num2);
}
