#include <iostream>
#include <cstdio>
#include <cstdlib>

//输入一系列字符，统计其中英文字母，数字，空格的个数

using namespace std;

int main()
{
    char a[20];
    int b = 0;//英文字母的统计
    int c = 0;//数字的统计
    int d = 0;//空格的统计
    int f = 0;//其他的统计
    for(int i = 0; i < 20; i++)
    {
        cin >> a[i];
        if(('a' <= a[i])&&(a[i] <= 'z'))
            b++;
        else if((0 <= a[i])&&(9 <= '9'))
            c++;
        else if(' ' || '\n')
            d++;
        else
            f++;

    }
    cout << endl;
    cout << "英文字符的数量：" << b << endl;
    cout << "数字的数量：" << c << endl;
    cout << "空格的数量：" << d << endl;
    cout << "其他字符的数量：" << f << endl;


    return 0;
}
