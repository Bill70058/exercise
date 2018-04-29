#include <iostream>
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <process.h> //Ïß³Ì

using namespace std;


void run(void *p)
{
    MessageBoxA(0, "ABC", "QWE", 0);
}


int main()
{
    for(int i = 0; i < 5; i++)
    {
         run(NULL);
         _beginthread(run,0,NULL);
    }

}
