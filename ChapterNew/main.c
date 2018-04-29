#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

        pointer();
        //change();
        //array();
        //calloc函数用法：—与malloc函数类似，但是calloc函数会初始化赋值
    /**
    int money,count = 0;
    int i = 0;
    int moneys[6];//д╛хож╖ЁжаЫн╩йЩ
    char unit[10][4] = {"аЦ","р╪","╥║","хЧ","ка","нИ","б╫","фБ","╟ф","╬а"};
    printf("plese input a number(little 6):\n");
    scanf("%d", &money);
    while(money != 0)//judge how much number
    {
        moneys[i] = money%10;
        money /= 10;
        i++;
        count++;
    }
    printf("user input %d number\n", count);
    for(i = 0; i < count;i++){
        printf("%d - %s\n", moneys[i], unit[moneys[i]]);
    }
    **/
    /**
    一个国标字 两个字节~  加上还有一个结束标志~ 也就是说你放一个国标字
     至少需要三个字节~你定义一个一维数组~ 第一个国标字后面就给你丢一个
     结束位进去~ 没错~你确实把后面的汉字放进去了~
    它确实存在~ 但是printf不会这样读~  他一遇到第一个结束位就停了~他认为
     这个字符串到这就该停了~
    **/
    return 0;
}
