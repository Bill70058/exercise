#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
/*
���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬
������񫣬�ֶ����һ�����ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ����ӵ�һ���һ����
����10���������ٳԣ���ֻʣ��һ�������ˡ����һ�칲ժ�˶������ӡ�
*/
int main()
{
    int i,k=1,n=0,sum=1;
    for(i=10;i>=1;i--)
    {
    sum=sum+k;//�����ǹغ���ѧ�����߼�
    sum=sum*2;
    }
    printf("��һ��ժ������Ϊ%d\n",sum);
}