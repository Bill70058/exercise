#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;




//���� s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ ����5�������)������������м��̿��ơ�
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
