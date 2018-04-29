#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

unsigned rightrot(unsigned, int);

int main()
{
    int w = 8;
    int y = 7;
    int n = 0;
    n = rightrot(w,y);
    cout << n;
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    int wordlength(void);
    int rbit;

    while(n--){
        rbit = (x & 1) << (wordlength()-1);
        x = x >> 1;
        x = x | rbit;
    }
    return x;
}

int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for(i = 1; (v = v >> 1) > 0; i++)
    {
        ;
    }
    return i;
}
