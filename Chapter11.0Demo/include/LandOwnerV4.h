#ifndef LANDOWNERV4_H
#define LANDOWNERV4_H
#include <iostream>

using namespace std;


class LandOwnerV4
{
    public:
        LandOwnerV4();
        ~LandOwnerV4();
        void Show();
        void SetScore(long lScore);
        void SetName(string lName);

    protected:

    private:
        long score;//»ý·Ö
         string name;

        int cards[20];

};

#endif // LANDOWNERV4_H
