#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//����žų˷��ھ���
int main()
{
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
            if(j == 9)
                printf("\n");

        }
    }
    return 0;
}
