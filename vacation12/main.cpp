#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;
//����Ϸ���ɼ����"��"һ�������˲£�����˲¶��ˣ��������Ϸ����������������ʾ�����������µ�����̫����̫С��ֱ���˲¶�Ϊֹ���������¼�˲µĴ������Դ˿��Է�ӳ��������"��"��ˮƽ
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
    srand( (unsigned)time( NULL ) );          //��ʼ�������
    for( i = 0; i < 10;i++ )                          //��ӡ��10�������
          printf( " %d\n", rand() );
          */
}
/*
    void Rand1_10(int *a)  //ʹ��rand(void)�������������1-10
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
    a[i] = rand() % 10;
    }
    }

    void Srand1_10(int *a)  //ʹ��srand(unsigned int seed)�������������1-10
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

