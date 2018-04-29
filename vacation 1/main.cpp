#include <iostream>
#include <cstdio>
#include <cstdlib>

//输入两实数（浮点数），由大到小输出（先强转，比较大小，后输出）

using namespace std;

int main()
{
    float x,y;
    cin >> x;
    cin >> y;
    if(x > y)
        cout << x << '\t' << y;
    else
        cout << y << '\t' << x;
    return 0;
}
