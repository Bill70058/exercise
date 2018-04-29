#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

unsigned getbis(unsigned,int,int,unsigned);

int main()
{

    cout << getbis(7,4,3,8);

}

unsigned getbis(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}
