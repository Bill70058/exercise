#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "LandOwnerV1.hpp"
#include "LandOwnerV3.h"
#include "LandOwnerV4.h"

using namespace std;

int main()
{
    //LandOwnerV1 landOwner1;//������һ��LandOwner1���͵ı���-landowner1
    //���ö���ĳ�Ա����
    //landOwner1.TouchCard(100);
    //LandOwnerV3 landOwner3;
    //landOwner3.name = "����";
    //landOwner3.TouchCard(20);
    LandOwnerV4 landOwnerV4;
    //landOwnerV4.name = "������ү";
    //landOwnerV4.score = 2000;
    landOwnerV4.SetScore(1000);
    landOwnerV4.SetName("������ү");
    landOwnerV4.Show();
    return 0;
}
