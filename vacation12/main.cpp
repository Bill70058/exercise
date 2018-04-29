#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;
//数游戏。由计算机"想"一个数请人猜，如果人猜对了，则结束游戏，否则计算机给出提示，告诉人所猜的数是太大还是太小，直到人猜对为止。计算机记录人猜的次数，以此可以反映出猜数者"猜"的水平
int main(void)
{
    int i;
    int x;
    printf("plese input a number:");
    scanf("%d", &x);
    srand((unsigned)time(NULL));
    i = rand()%100;
    while(i)
    {
        if(x < i){
            printf("you guess small more");
            scanf("%d", &x);
        }

        else if(x > i){
            printf("you guess big more");
            scanf("%d", &x);
        }
        else{
            printf("congratulations you guess right!!!");
            break;
        }




    }
    /*
    int i;
   srand( (unsigned)time( NULL ) );
       for( i = 0; i < 10;i++ )
            printf( "%d\n", rand()%100);
    /*int i;
   srand( (unsigned)time( NULL ) );
       for( i = 0; i < 10;i++ )
            printf( "%5.2f\n", rand()/32767.0);
            */


    /*
    int i;
    srand( (unsigned)time( NULL ) );          //初始化随机数
    for( i = 0; i < 10;i++ )                          //打印出10个随机数
          printf( " %d\n", rand() );
          */
}
/*
    void Rand1_10(int *a)  //使用rand(void)函数产生随机数1-10
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
    a[i] = rand() % 10;
    }
    }

    void Srand1_10(int *a)  //使用srand(unsigned int seed)函数产生随机数1-10
    {
    int i = 0;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
    a[i] = rand() % 10;
    }
    }

    void PrintArr(int *a, int n)
    {
    int i = 0;

    for (i = 0; i < n; i++)
    {
    printf ("%d  ", a[i]);
    }
    printf ("\n");
    }

    int main()
    {
    int A[10] = {0};
    int B[10] = {0};

    Rand1_10(A);
    PrintArr(A, 10);

    Srand1_10(B);
    PrintArr(B, 10);

return 0;
}
*/

