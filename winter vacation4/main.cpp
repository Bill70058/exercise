#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>


using namespace std;

//输入一个正整数，将其逆序输出。例如，输入12345，输出54321。

int main()
{
    char str_a[20];
    cout << "input a string: " << endl;
    gets(str_a);
    //puts(str_a);
    for(int i = strlen(str_a);i--;)
        printf("%c", str_a[i]);
}
