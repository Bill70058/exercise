#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//ͳ����[2980-21980]֮���ж��ٸ�����ͬʱ��29��43�����������ܱ�53����
int main()
{
    int a[90001];
    for(int i = 2980; i < 90001;i++)
    {
        a[i] = i;
        if((a[i] % 29 == 0)&&(a[i] %43 == 0))
        {
            if(a[i] % 53 != 0)
            {
                cout << a[i] << endl;
            }
        }
    }
}
