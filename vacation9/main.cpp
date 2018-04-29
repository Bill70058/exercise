#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//编写程序，求S=1/(1*2)+1/(2*3)+1/(3*4)+……前50项之和。要求必须使用for语句实现

int main()
{
    int S = 0; //总和
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

/** ---标准---:我的理解是题目为求出1分别除以（1*2）+1，（2*3）+1...再加起来
#include <stdio.h>
int main()
{
int n,sigh=1;
float m,sum=0,term;
for(n=1;n<=50;n++)
{
m=n*(n+1); //用来计算N的阶乘
term=sigh/m; //用来计算1/N的值
sum=sum+term;
}
printf("%.10f\n",sum);
}
*/
