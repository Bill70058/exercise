#include <iostream>
#define n 5

using namespace std;

int main()
{
        int a[5] = {1,2,3,4};
        int x = 0,y;
        for(int i = 0; i < 4; i++){
             for(int j = i+1; j < 4; j++){
                       if(a[i] < a[j]){
                            x = a[i];
                            a[i] = a[j];
                            a[j] = x;
                }

            }
        }
        for(int i = 0; i < 4; i++){
            cout << a[i];
        }


}
