#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
/*
求解爱因斯坦数学题。有一条长阶梯，若每步跨2阶，则最后剩余1阶，
若每步跨3阶，则最后剩2阶，若每步跨5阶，则最后剩4阶，
若每步跨6阶则最后剩5阶，若每步跨7阶，最后才正好一阶不剩。
请问，这条阶梯共有多少阶?
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
    int x=1;//x为阶长
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
