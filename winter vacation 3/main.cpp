#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

//����һ�����year���жϸ����Ƿ������ꡣ�ж�����������ǣ��ܱ�4���������ܱ�100���������ܱ�400������

int main()
{
    int i;
    while(i)
    {    cout << endl;
         printf("input a years: ");
    scanf("%d", &i);
    if((i % 4 == 0)&&(i % 100 != 0))
    {
        printf("this is odd years.");
    }
    else
        printf("this years not`s odd years.");
    }

    return 0;
}
