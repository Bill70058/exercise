#include <iostream>

using namespace std;
//统计在二进制数字内有多少个1
int bitcount(unsigned);

int main()
{
    int x = 7;
     x = bitcount(x);
     cout << x;

    return 0;
}


int bitcount(unsigned x)//x用无符号位填充就可以使他在任何机器上左边都用0填充
{
    int b;
    for(b = 0; x != 0; x&=(x-1)){
        if(x & 01)
            ++b;
    }
    return b;
}
