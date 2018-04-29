#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
//1~999

int main()
{
    int a,b,c;
    int i = 0;
    for(i = 0; i < 999; i++){
        a = i/100;//百位数
        b = (i/10)%10;//十位数
        c = i%10;//个位数
            if(a*a*a+b*b*b+c*c*c ==i)
    {
        printf("%d\n", i);
    }
    }


}

