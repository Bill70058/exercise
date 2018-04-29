#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _prop{
    int id;
    char name[50];
    double price;
    int stock;//库存
    char desc[200];//描述
}Prop;

typedef struct _bag{
    int playerId;
    int count;
    int max;
    Prop props[8];
}Bag;

typedef struct _player{
    int id;
    char name[50];
    char pass[50];
    Bag bag;
    double gold;
    double sysee;
}Player;

void ShowProps();
void Showplayers();
/**
*交易函数
*1.参与交易的玩家指针-为了方便修改玩家交易后的金币数
*2.玩家购买的商品Id
**/
void Trade(Player *player, int poopId);
void InputProps();

void Init();//初始化游戏数据

Prop *props;
Player *players;
int propsCount = 0;
int playerCount = 0;

int main()
{
    Init();

    printf("\n********************交易前***********************************\n");
    ShowProps();
    Showplayers();

    Trade(&players[0],3);
    printf("\n********************交易后***********************************\n");
    ShowProps();
    Showplayers();

    return 0;
}
void Trade(Player *player,int propId)
{
    int i;
    ///需要判断：商品的库存，玩家余额够不够，玩家背包空间够不够
    Prop *tradeProp = NULL;///要购买的商品指针
    for(i = 0; i < propsCount; i++){
        if(propId == props[i].id){
            tradeProp = &props[i];//tradeProp = prop + i;
            break;
        }
    }
    if(tradeProp->stock <= 0){
        printf("地主家都没有余粮！商品都被买空啦！\n");
        return;
    }
    if(player->gold < tradeProp->price){
        printf("钱包都是瘪的，这里可是看钱的社会！！\n");
        return;
    }
    if(player->bag.count >= player->bag.max && player->bag.count != 0){
        printf("背包已满，交易失败！\n");
        return;
    }
    //满足交易条件，执行交易的业务操作
    //1.商品库存-1
    tradeProp->stock--;
    //2.玩家金币-商品单价
    player->gold -= tradeProp->price;
    //3.玩家背包道具增加
    //判断玩家背包中是否有该商品，
    //如果没有该商品，该商添加到背包中即可
    //如果有该商品，背包中的该商品总数+1
    for(i = 0; i < player->bag.count;i++){
            //如果购买的商品id跟背包中的某个商品id相同
        if(propId == player->bag.props[i].id){
            player->bag.props[i].stock++;
            break;
        }

    }
    //如果没有该商品，该商品添加到背包中即可
    if(i == player->bag.count){
        //向背包中创建一个商品
        int newIndex = player->bag.count;
        player->bag.props[newIndex].id = tradeProp->id;
        player->bag.props[newIndex].price = tradeProp->price;
        player->bag.props[newIndex].stock = 1;
        strcpy(player->bag.props[newIndex].name,tradeProp->name);
        strcpy(player->bag.props[newIndex].desc,tradeProp->desc);
        player->bag.count++;
    }
}

void Init()
{
    static Prop propArray[] = {
    {1,"双倍经验卡", 3000,10,"双击666"},
    {2,"腐烂的道袍", 5000,18,"只可远观不可亵玩"},
    {3,"生锈的铁剑", 8000,10,"新手专用"},
    {4,"无极袍", 13000,5,"刀枪不入，水火不容"},
    {5,"升级丹", 83000,10,"吃了以后回味无穷"},
   };
    props = propArray;//指针
   propsCount = 5;

   static Player playerArray[] = {
   {1,"超级毛毛虫", "123456", .gold = 50000,.bag.max = 8},
   {2,"超级奥特曼", "123456", .gold = 150000,.bag.max = 8},
   {3,"原始天尊", "123456", .gold = 500000,.bag.max = 8},
   {4,"星河大帝", "123456", .gold = 1150000,.bag.max = 8},
   };
    players = playerArray;
   playerCount = 4;

}

void ShowProps()
{
    int i;
    if(props == NULL)return;
    printf("%-5s\t%-14s%-5s\t库存\t商品介绍\n","编号","名称","单价");
    for(i = 0; i < propsCount; i++){
        printf("%-5d%-14s%-5.2lf\t%d\t%s\n", props[i].id,props[i].name,props[i].price,props[i].stock,props[i].desc);
    }
}

void Showplayers()
{
    int i,j;
    if(players == NULL)
        return;
    printf("编号\t%-14s金币\n", "名称");
    for(i = 0; i < playerCount; i++){
        printf("%d\t%-14s%.01f\n", players[i].id,players[i].name,players->gold);

        for(j = 0; j < players[i].bag.count;j++){
                printf("\t%s\t%d\t",players[i].bag.props[j].name,players[i].bag.props[j].stock);
             }
             printf("\n");
       }


     //printf("玩家的背包数据如下：\n");

}

