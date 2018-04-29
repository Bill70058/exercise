#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 0;
    int i;
    for(i = 1; i < 21;i++)
        if(i%5==0)
            a = i+a;
    printf("%d", a);
    return 0;
}
