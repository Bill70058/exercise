#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������� ��10�����ʱ�������������ף���10�η�����ߣ�
int main()
{
    double hight = 100;
    double length = 0;
    for(int i = 1; i < 11; i++)
    {
        hight = hight/2;
        length = hight + length;
        printf("%f\t", hight);
    }
    cout << hight << endl;
    cout << length << endl;
    return 0;
}
