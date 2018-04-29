#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;


unsigned invert(int,int,int);

int main()
{
    cout << invert(9,4,3);
    return 0;
}

unsigned invert(int x,int p, int n)
{
    return x ^ (~(~0 << n) << (p+1-n));
}
