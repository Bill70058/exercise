#include <stdio.h>
#include <stdlib.h>

int x,y;
int i,j;

void ssr(int a[]);
void srr(int *a);

int main()
{
    int a[5];
    int temp;
    printf("plese input five element:");
    for(i = 0; i < 5; i++)
    scanf("%d", &a[i]);
    ssr(a);
    for(i = 0; i < 5; i++)
    {
        if(a[i] == x)
            x = i;
        if(a[i] == y)
            y = i;

    }
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
    srr(a);
}

void srr(int *a)
{
    for(i = 0; i < 5; i++)
        printf("%d", a[i]);
}

void ssr(int a[])
{

    int temp;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5-i-1;j++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    x = a[0];
    y = a[4];

}
