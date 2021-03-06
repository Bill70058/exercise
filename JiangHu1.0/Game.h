#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>




void Init();//初始化游戏数据
void Show();//显示全局数据


/**玩家、地图、装备、怪物
    游戏地图结构
    编号、名称、介绍、玩家的进入等级
**/
typedef struct _map{
    int id;
    char name[50];
    int minLevel;//玩家进入的最低等级
    //系统自带坐标函数
    COORD coord;
    char desc[500];//地图的介绍
}Map;

//玩家、地图、装备、怪物
/** 游戏道具类型枚举 - 武器、道具、消耗品、卡片、碎片 **/
typedef enum _proptype{
    Weapon,Armor,Con,card,Frag
}PropType;
/*游戏道具 - 武器、防具、消耗品、卡片*/
typedef struct _prop{
    int id;  //道具编号
    char name[50]; //道具名称
    int level; //道具级别
    int stock; //道具的库存
    double price; //道具的单价
    PropType type;//道具类型
    union{//联合 - 多选一
        int minAttack;//如果是武器，对应攻击力
        int minDefence;//如果是防具，对应防御力
        int minPower; //如果是消耗品，对应增加能量值
    };
    union{//联合 - 多选一
        int maxAttack;//如果是武器，对应攻击力
        int maxDefence;//如果是防具，对应防御力
        int maxPower; //如果是消耗品，对应增加能量值
    };
    char desc[200];//道具的功能描述
}Prop;
Map mapArray[8][8] = {
    {1,"天山",1,{0,0}, "这里充满了西域文化"},    {1,"天山",1,{0,0}, "这里充满了西域文化"},
    {1,"天山",1,{0,0}, "这里充满了西域文化"},    {1,"天山",1,{0,0}, "这里充满了西域文化"},
    {1,"天山",1,{0,0}, "这里充满了西域文化"},    {1,"天山",1,{0,0}, "这里充满了西域文化"},
    {1,"天山",1,{0,0}, "这里充满了西域文化"},    {1,"天山",1,{0,0}, "这里充满了西域文化"}


};






#endif // GAME_H_INCLUDED
