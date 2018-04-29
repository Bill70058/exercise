#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H
#include <iostream>

using namespace std;


class LandOwnerV3
{
    public:
        LandOwnerV3();//构造函数的声明
      ~LandOwnerV3();//析构函数的声明

      void TouchCard(int cardCount);//声明摸牌的方法
      void ShowScore();             //声明的显示积分方法

    protected:

    public:
        string name;
        long score;
        int cards[20];
};

#endif // LANDOWNERV3_H
