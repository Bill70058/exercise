#include <iostream>
#include <cstdio>
#include <cstdlib>

//1，1，2，3，5，8，…的前20项，每行输出5项。
using namespace std;

int main()
{
    int b,sum;
    int a[20];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < 21; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    for(int i = 0; i < 20; i++)
    {
        printf("%d\t", a[i]);
        if(i % 5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
