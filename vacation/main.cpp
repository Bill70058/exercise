#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
/*
��Ⱞ��˹̹��ѧ�⡣��һ�������ݣ���ÿ����2�ף������ʣ��1�ף�
��ÿ����3�ף������ʣ2�ף���ÿ����5�ף������ʣ4�ף�
��ÿ����6�������ʣ5�ף���ÿ����7�ף���������һ�ײ�ʣ��
���ʣ��������ݹ��ж��ٽ�?
*/
int main()
{
    for(int i = 0;i < 99999; i++)
    {
        if((i%7==0)&&(i%6==5)&&(i%5==4)&&(i%3==2)&&(i%2==1))
        {
            cout << i << endl;
        }
    }
    /*
    int x=1;//xΪ�׳�
    while(x)
    {
    if(x%2!=1) {x++;continue;}
    if(x%3!=2) {x++;continue;}
    if(x%5!=4) {x++;continue;}
    if(x%7) {x++;continue;}
    printf("%d\n",x);
    printf("press \"Enter\" to continue\n");
    getchar();
    x++;
    }*/



    return 0;
}
