#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//输入若干个非零整数，以0为终止符，输出这批数中的最大值

int main()
{
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x = 0;
    for(int j = 0; j < 20; j++)
    {
            for(int i = 0; i < 20 ; i++)
        {
            if(a[i] < a[i+1])
            {
                x = a[i];
                a[i] = a[i+1];
                a[i+1] = x;
            }
        }
    }

    cout << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << a[i] << endl;
    }


    return 0;
}
