#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//统计在[2980-21980]之间有多少个数能同时被29和43整除，而不能被53整除
int main()
{
    int a[90001];
    for(int i = 2980; i < 90001;i++)
    {
        a[i] = i;
        if((a[i] % 29 == 0)&&(a[i] %43 == 0))
        {
            if(a[i] % 53 != 0)
            {
                cout << a[i] << endl;
            }
        }
    }
}
