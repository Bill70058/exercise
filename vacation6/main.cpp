#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


//���� s=1-2!+3!-4!+��-n!��ֵ�����,����n������10��Ҫ�����ʹ��for���ʵ��
int main()
{


    long a,b,c;
    int n,sun = 0;
    printf("plese input the number n:");
    scanf("%d", &n);
    a = b = c = 1;
    for(int i = 1;i < n; i++)
    {
       a = a * i;//caculate the factorial "i"
       sun = sun + a*b;
       b = -b;//attention: if encounter interleave change "+""-" symbol, you can do it like this
    }
    cout << sun << endl;
    return 0;
}
