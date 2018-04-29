#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "LandOwnerV1.hpp"
#include "LandOwnerV3.h"
#include "LandOwnerV4.h"

using namespace std;

int main()
{
    //LandOwnerV1 landOwner1;//申明了一个LandOwner1类型的变量-landowner1
    //调用对象的成员方法
    //landOwner1.TouchCard(100);
    //LandOwnerV3 landOwner3;
    //landOwner3.name = "死侍";
    //landOwner3.TouchCard(20);
    LandOwnerV4 landOwnerV4;
    //landOwnerV4.name = "巴依老爷";
    //landOwnerV4.score = 2000;
    landOwnerV4.SetScore(1000);
    landOwnerV4.SetName("巴依老爷");
    landOwnerV4.Show();
    return 0;
}
