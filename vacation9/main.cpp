#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//��д������S=1/(1*2)+1/(2*3)+1/(3*4)+����ǰ50��֮�͡�Ҫ�����ʹ��for���ʵ��

int main()
{
    int S = 0; //�ܺ�
    int a = 1;
    int c,d;
    int b = 0;
    c  = d = 0;
    for(int i = 1; i < 50; i++)
    {
        d = i*(i +1);
        b = a/d;  //(i * d)+ a
        S = S + b;

    }
    printf("%.10f\n",S);



    return 0;
}

/** ---��׼---:�ҵ��������ĿΪ���1�ֱ���ԣ�1*2��+1����2*3��+1...�ټ�����
#include <stdio.h>
int main()
{
int n,sigh=1;
float m,sum=0,term;
for(n=1;n<=50;n++)
{
m=n*(n+1); //��������N�Ľ׳�
term=sigh/m; //��������1/N��ֵ
sum=sum+term;
}
printf("%.10f\n",sum);
}
*/
