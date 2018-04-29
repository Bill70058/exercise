#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在 第10次落地时，共经过多少米？第10次反弹多高？
int main()
{
    double hight = 100;
    double length = 0;
    for(int i = 1; i < 11; i++)
    {
        hight = hight/2;
        length = hight + length;
        printf("%f\t", hight);
    }
    cout << hight << endl;
    cout << length << endl;
    return 0;
}
