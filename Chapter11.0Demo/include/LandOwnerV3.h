#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H
#include <iostream>

using namespace std;


class LandOwnerV3
{
    public:
        LandOwnerV3();//���캯��������
      ~LandOwnerV3();//��������������

      void TouchCard(int cardCount);//�������Ƶķ���
      void ShowScore();             //��������ʾ���ַ���

    protected:

    public:
        string name;
        long score;
        int cards[20];
};

#endif // LANDOWNERV3_H
