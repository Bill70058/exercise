#include <stdio.h>
#include <stdlib.h>
#include "Game.h"



/**

int id;  //道具编号
    char name[50]; //道具名称
    int level; //道具级别
    int stock; //道具的库存
    double price; //道具的单价
    PropType type;//道具类型
    union{//联合 - 多选一
        int attack;//如果是武器，对应攻击力
        int defence;//如果是防具，对应防御力
        int power; //如果是消耗品，对应增加能量值
    };
    char desc[200];//道具的功能描述
    **/
Prop propArray[] = {
    {1,"尚方宝剑", 1, 5, 5000, Weapon,.minAttack = 1,.maxAttack = 4, "这是一把非常牛逼的宝剑"},
    {2,"荆棘甲", 2, 5, 10000, Armor,.minDefence = 2,.maxDefence = 6, "这是一件非常牛逼的披风"},
    {3,"玉液琼浆", 3, 5, 15000, Con,.minPower = 100,.maxPower = 500, "印度神油"},

};

void Init()//初始化游戏数据
{

}
void Show()//显示全局数据
{
    int propCount = sizeof(propArray)/sizeof(Prop);
    int i;
    for(i = 0; i < propCount; i++)
    {
        printf("%d\t%s\t%0.1f\n", propArray[i].id, propArray[i].name,propArray[i].price);
        switch(propArray[i].type){
        case Weapon:
            printf("最小攻击力：%d\t最大攻击力%d：\n", propArray[i].minAttack,propArray[i].maxAttack);
            break;
        case Armor:
            printf("最小防御力：%d\t最大防御力：%d\n", propArray[i].minDefence, propArray[i].maxDefence);
            break;
        }
    }
}
