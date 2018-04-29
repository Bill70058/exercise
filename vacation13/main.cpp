#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//查询自动售货机中商品的价格。假设自动化售货机出售4种商品：
//薯片（crisps）、爆米花（popcorn）、巧克力（chocolate）和可乐（cola），
//售价分别是每份3.0、2.5、4.0和3.5元。在屏幕上显示以下菜单（编号和选项），
//用户可以连续查询商品的价格，当查询次数超过5次时，自动退出查询；不到5次时，
//用户可以选择退出。当用户输入编号1~4，显示相应商品的价格（保留1位小数）；
//输入0，退出查询；输入其他编号，显示价格为0。
int main()
{
    float crisps,popcorn,chocolate,cola;
    int choice;
    int i = 0;//i need a number caculate the wheel
    crisps = 3.0;
    popcorn = 2.5;
    chocolate = 4.0;
    cola = 3.5;
    while(1)
    {
        printf("input you want enquiries commodity,we have:\n");
        printf("1.crisps\t 2.popcorn\t 3.chocolate\t 4.cola\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("crisps is 3.0 dollar.\n");
            i++;
            break;
        case 2:
            printf("popcorn is 2.5 dollar.\n");
            i++;
            break;
        case 3:
            printf("chocolate is 4.0 dollar.\n");
            i++;
            break;
        case 4:
            printf("cola is 2.5 dollar.\n");
            i++;
            break;
        case 5:
            exit(0);
            break;
        }
        if(i == 5)
        {
            printf("you already choice quintic system will constraint quit");
            exit(0);

        }
    }

    return 0;
}
