#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED


/**
1.���ѡ��Ҫ����ĵ���
2.���ͬ�⽻�׺�۳���Ӧ����Ϸ��
3.��Ӧ��Ʒ���-1
4.��ұ�����������Ʒ�����Ʒ����+1
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
