#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED


/**
1.玩家选择要购买的道具
2.玩家同意交易后扣除相应的游戏币
3.对应商品库存-1
4.玩家背包中增加商品或该商品数量+1
**/
/**

**/

typedef struct _store
{
    char *store;
    int *price;
    int *inventory;
}Store;

typedef struct _bag
{
    int count_bag;
    char *bag;

}Bag;

void Show();
void Input();



#endif // STORE_H_INCLUDED
