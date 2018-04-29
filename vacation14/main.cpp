#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
/*
猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，
还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，
又多吃了一个。以后每天早上都吃了前一天剩下的桃子的一半多一个。
到第10天早上想再吃，见只剩下一个桃子了。求第一天共摘了多少桃子。
*/
int main()
{
    int i,k=1,n=0,sum=1;
    for(i=10;i>=1;i--)
    {
    sum=sum+k;//这里是关乎数学运算逻辑
    sum=sum*2;
    }
    printf("第一天摘桃子数为%d\n",sum);
}
