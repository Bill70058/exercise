#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

//�Ӽ��̶���һ��������ͳ�Ƹ�����λ�������磬����12534�����5������-99�����2������0�����1��

int main()
{
    long x;
    int y;
    int i = 0;
    cout << "plese input a number(can`t input exceed eight digit number): " << endl;
    cin >> x;
    if(x < 0)
    {
        x = -x;
    }
    if(x > 1000000000)
    {
        cout << "sorry this procedure just verify within eight digit number!!!" << endl;
    }

  for(int j = 10; j < 1000000000;)
    {

        y = x % j;
        j = j * 10;
        i++;
        if(x == y)
        {
            //cout << y << endl;
            cout << i << endl;
            break;
        }

    }



}
