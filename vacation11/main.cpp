#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
//1~999

int main()
{
    int a,b,c;
    int i = 0;
    for(i = 0; i < 999; i++){
        a = i/100;//��λ��
        b = (i/10)%10;//ʮλ��
        c = i%10;//��λ��
            if(a*a*a+b*b*b+c*c*c ==i)
    {
        printf("%d\n", i);
    }
    }


}

