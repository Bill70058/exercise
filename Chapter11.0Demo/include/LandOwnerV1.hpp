#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class LandOwnerV1
{
    public:
        LandOwnerV1() {}
        ~LandOwnerV1() {}
        void TouchCard(int cardCount)
        {
            //暂时省略函数的实现
            cout << name << "摸了" << cardCount << "张牌" << endl;
        }
        void ShowScore(){
            cout << name << "当前的积分为：" << score << endl;
        }

    protected:

    private:
        string name;
        long score;
        int cards[20];
};

#endif // LANDOWNERV1_H
