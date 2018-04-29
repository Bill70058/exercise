#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;




//计算 s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时 共有5个数相加)，几个数相加有键盘控制。
int main()
{
    int a,b;
    int c = 1;
    int d = 0;
    int sum = 0;
    printf("plese input what you want accumulation number:");
    scanf("%d", &a);
    printf("plese input what circulation time:");
    scanf("%d", &b);
    for(int i = 0; i < b;i++)
    {
        sum = sum + a*c;
        d = d + sum;
        c = c * 10;


    }
    cout << d;
    return 0;
}
