#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//用for循环输出菱形图案
int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
    for(j=4;j-i>0;j--)
    printf("#");
    for(k=1;2*i-k>0;k++)
    printf("*");
    printf("\n");
    }
    for(i=3;i>0;i--)
    {
    for(j=4;j-i>0;j--)
    printf(" ");
    for(k=0;2*i-1>k;k++)
    printf("*");
    printf("\n");
    }
    return 0;
}
