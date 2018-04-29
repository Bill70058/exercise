#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

//输入一个年份year，判断改年是否是闰年。判断闰年的条件是：能被4整除但不能被100整除，或能被400整除。

int main()
{
    int i;
    while(i)
    {    cout << endl;
         printf("input a years: ");
    scanf("%d", &i);
    if((i % 4 == 0)&&(i % 100 != 0))
    {
        printf("this is odd years.");
    }
    else
        printf("this years not`s odd years.");
    }

    return 0;
}
