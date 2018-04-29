#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _prop{
    int id;
    char name[50];
    double price;
    int stock;//���
    char desc[200];//����
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
*���׺���
*1.���뽻�׵����ָ��-Ϊ�˷����޸���ҽ��׺�Ľ����
*2.��ҹ������ƷId
**/
void Trade(Player *player, int poopId);
void InputProps();

void Init();//��ʼ����Ϸ����

Prop *props;
Player *players;
int propsCount = 0;
int playerCount = 0;

int main()
{
    Init();

    printf("\n********************����ǰ***********************************\n");
    ShowProps();
    Showplayers();

    Trade(&players[0],3);
    printf("\n********************���׺�***********************************\n");
    ShowProps();
    Showplayers();

    return 0;
}
void Trade(Player *player,int propId)
{
    int i;
    ///��Ҫ�жϣ���Ʒ�Ŀ�棬�������������ұ����ռ乻����
    Prop *tradeProp = NULL;///Ҫ�������Ʒָ��
    for(i = 0; i < propsCount; i++){
        if(propId == props[i].id){
            tradeProp = &props[i];//tradeProp = prop + i;
            break;
        }
    }
    if(tradeProp->stock <= 0){
        printf("�����Ҷ�û����������Ʒ�����������\n");
        return;
    }
    if(player->gold < tradeProp->price){
        printf("Ǯ�����Ǳ�ģ�������ǿ�Ǯ����ᣡ��\n");
        return;
    }
    if(player->bag.count >= player->bag.max && player->bag.count != 0){
        printf("��������������ʧ�ܣ�\n");
        return;
    }
    //���㽻��������ִ�н��׵�ҵ�����
    //1.��Ʒ���-1
    tradeProp->stock--;
    //2.��ҽ��-��Ʒ����
    player->gold -= tradeProp->price;
    //3.��ұ�����������
    //�ж���ұ������Ƿ��и���Ʒ��
    //���û�и���Ʒ��������ӵ������м���
    //����и���Ʒ�������еĸ���Ʒ����+1
    for(i = 0; i < player->bag.count;i++){
            //����������Ʒid�������е�ĳ����Ʒid��ͬ
        if(propId == player->bag.props[i].id){
            player->bag.props[i].stock++;
            break;
        }

    }
    //���û�и���Ʒ������Ʒ��ӵ������м���
    if(i == player->bag.count){
        //�򱳰��д���һ����Ʒ
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
    {1,"˫�����鿨", 3000,10,"˫��666"},
    {2,"���õĵ���", 5000,18,"ֻ��Զ�۲�������"},
    {3,"���������", 8000,10,"����ר��"},
    {4,"�޼���", 13000,5,"��ǹ���룬ˮ����"},
    {5,"������", 83000,10,"�����Ժ��ζ����"},
   };
    props = propArray;//ָ��
   propsCount = 5;

   static Player playerArray[] = {
   {1,"����ëë��", "123456", .gold = 50000,.bag.max = 8},
   {2,"����������", "123456", .gold = 150000,.bag.max = 8},
   {3,"ԭʼ����", "123456", .gold = 500000,.bag.max = 8},
   {4,"�ǺӴ��", "123456", .gold = 1150000,.bag.max = 8},
   };
    players = playerArray;
   playerCount = 4;

}

void ShowProps()
{
    int i;
    if(props == NULL)return;
    printf("%-5s\t%-14s%-5s\t���\t��Ʒ����\n","���","����","����");
    for(i = 0; i < propsCount; i++){
        printf("%-5d%-14s%-5.2lf\t%d\t%s\n", props[i].id,props[i].name,props[i].price,props[i].stock,props[i].desc);
    }
}

void Showplayers()
{
    int i,j;
    if(players == NULL)
        return;
    printf("���\t%-14s���\n", "����");
    for(i = 0; i < playerCount; i++){
        printf("%d\t%-14s%.01f\n", players[i].id,players[i].name,players->gold);

        for(j = 0; j < players[i].bag.count;j++){
                printf("\t%s\t%d\t",players[i].bag.props[j].name,players[i].bag.props[j].stock);
             }
             printf("\n");
       }


     //printf("��ҵı����������£�\n");

}

