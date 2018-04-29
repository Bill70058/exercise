#include "LandOwnerV4.h"

LandOwnerV4::LandOwnerV4()
{
    //ctor
}
void LandOwnerV4::Show()
{
    cout << name << "ตรมห" << score << "ทึ" << endl;
}
void LandOwnerV4::SetScore(long lScore)
{
    score = lScore;
}
void LandOwnerV4::SetName(string lName)
{
    name = lName;
}
LandOwnerV4::~LandOwnerV4()
{
    //dtor
}
