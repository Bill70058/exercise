#include <iostream>

using namespace std;
//ͳ���ڶ������������ж��ٸ�1
int bitcount(unsigned);

int main()
{
    int x = 7;
     x = bitcount(x);
     cout << x;

    return 0;
}


int bitcount(unsigned x)//x���޷���λ���Ϳ���ʹ�����κλ�������߶���0���
{
    int b;
    for(b = 0; x != 0; x&=(x-1)){
        if(x & 01)
            ++b;
    }
    return b;
}
