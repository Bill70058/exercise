#include <iostream>
#include <cstdio>
#include <cstdlib>

//����һϵ���ַ���ͳ������Ӣ����ĸ�����֣��ո�ĸ���

using namespace std;

int main()
{
    char a[20];
    int b = 0;//Ӣ����ĸ��ͳ��
    int c = 0;//���ֵ�ͳ��
    int d = 0;//�ո��ͳ��
    int f = 0;//������ͳ��
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
    cout << "Ӣ���ַ���������" << b << endl;
    cout << "���ֵ�������" << c << endl;
    cout << "�ո��������" << d << endl;
    cout << "�����ַ���������" << f << endl;


    return 0;
}
