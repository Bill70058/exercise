#include <iostream>
#include "LandOwner.h"
#include "LandOwnerV1.h"
#include <windows.h>
using namespace std;

int main()
{
    system("color F0");

   LandOwnerV1 *ptr_landOwner1 = new LandOwnerV1();
   LandOwnerV1 *ptr_landOwner2 = new LandOwnerV1("专业斗地主");
   LandOwnerV1 *ptr_landOwner3 = new LandOwnerV1("周扒皮");

    ptr_landOwner1->ShowInfo();
    ptr_landOwner2->ShowInfo();
    ptr_landOwner3->ShowInfo();

   delete ptr_landOwner1;
   delete ptr_landOwner2;
   delete ptr_landOwner3;
    return 0;
}
