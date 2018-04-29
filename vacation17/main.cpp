#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int vacation(int x)
{
    int y;
    if(x < 0)
    {
        y = 1;
    }
    else if(x > 0)
    {
        y = 3;
    }
    else
        y = 5;

    printf("y = %d", y);
    return y;
}

int main()
{
    int x;
    printf("plese casual input a number:\n");
    scanf("%d", &x);
    vacation(x);
    return 0;
}
