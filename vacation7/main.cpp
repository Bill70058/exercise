#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//must have this headwe file

using namespace std;

//计算 公式 a－|b|,其中a，b为两个整数

int main()
{

    int a1,a2,b,s;
    printf("plese input twins number:");
    scanf("%d%d", &a1,&b);
    a2 = abs(a1);
    s = b - a2;
    cout << s;
    return 0;
}


