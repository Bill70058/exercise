#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

void input();

int main()
{
   input();
    return 0;
}

void input()
{
    long n;//����Ǧ�ʵ�����
    long x1,x2,x3;//Ǧ�ʵ�����
    long y1,y2,y3;//Ǧ�ʵļ۸�
    double z1,z2,z3;//ÿ֧Ǧ�ʵľ���
    long i1,i2,i3;//���ٻ��ѵ�Ǯ
    cout << "plese input how many pencils you need." << endl;
    cin >> n;
    cout << "plese input chic bunny pencils number." << endl;
    cin >> x1;
    cout << "plese input chic bunny pencils price." << endl;
    cin >> y1;
    cout << "plese input second pencils number." << endl;
    cin >> x2;
    cout << "plese input second pencils price." << endl;
    cin >> y2;
    cout << "plese input thirdly pencils number." << endl;;
    cin >> x3;
    cout << "plese input thirdly pencils price." << endl;
    cin >> y3;

   cout << z1 = y1 / x1 << endl;
   cout << z2 = y2 / x2;
   cout << z3 = y3 / x3;
    i1 = z1 * n;
    i2 = z2 * n;
    i3 = z3 * n;
    cout << i1 << "-" << i2 << "-" << i3 << endl;
    if(z1 < z2)
    {
        if(z1 < z3)
        {
            cout << z1 * n << endl;
        }
        else
        {
            cout << z3 * n << endl;
        }
    }
    else
    {
        if(z2 < z3)
        {
            cout << z2 * n << endl;
        }
        else
        {
            cout << z3 * n << endl;
        }
    }

}


