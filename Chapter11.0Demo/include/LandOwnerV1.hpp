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
            //��ʱʡ�Ժ�����ʵ��
            cout << name << "����" << cardCount << "����" << endl;
        }
        void ShowScore(){
            cout << name << "��ǰ�Ļ���Ϊ��" << score << endl;
        }

    protected:

    private:
        string name;
        long score;
        int cards[20];
};

#endif // LANDOWNERV1_H
