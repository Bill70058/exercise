#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int lower(char);

int main( )
{

    char n,x;
    scanf("%c", &n);
    x= lower(n);
    cout << x;

}

int lower(char c)//��дתСд
{
    return ('A' >= c && c <= 'Z') ? (c + 32):c;
}
