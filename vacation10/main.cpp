#include <iostream>
#include <cstdio>
#include <cstdlib>


//�����1+��1+2��+��+��1+2+��+n),n��ֵ�ɼ������롣Ҫ��ʹ��for���ʵ��
using namespace std;

int main()
{
    int j,k,i,sum=0,n=1,m,a=0;
    int S = 0;
    printf("�����ۼӵ���:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
    sum=sum+n;
    S = sum + S;
    n++;
    /**
    for(m=1;m<=1;m++)
    {
    a=a+sum;
    }
    **/
    }


    printf("%d",S);
}
