#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//��n�Ľ׳�

int main()
{
    long n,s = 1;
    printf("plese input the number-n:");
    scanf("%d", &n);
    for(int i = 1; i < n;i++)
    {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}
