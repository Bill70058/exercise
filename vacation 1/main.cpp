#include <iostream>
#include <cstdio>
#include <cstdlib>

//������ʵ���������������ɴ�С�������ǿת���Ƚϴ�С���������

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
