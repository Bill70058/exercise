#include <stdio.h>
#include <stdlib.h>
#include "Game.h"



/**

int id;  //���߱��
    char name[50]; //��������
    int level; //���߼���
    int stock; //���ߵĿ��
    double price; //���ߵĵ���
    PropType type;//��������
    union{//���� - ��ѡһ
        int attack;//�������������Ӧ������
        int defence;//����Ƿ��ߣ���Ӧ������
        int power; //���������Ʒ����Ӧ��������ֵ
    };
    char desc[200];//���ߵĹ�������
    **/
Prop propArray[] = {
    {1,"�з�����", 1, 5, 5000, Weapon,.minAttack = 1,.maxAttack = 4, "����һ�ѷǳ�ţ�Ƶı���"},
    {2,"������", 2, 5, 10000, Armor,.minDefence = 2,.maxDefence = 6, "����һ���ǳ�ţ�Ƶ�����"},
    {3,"��Һ��", 3, 5, 15000, Con,.minPower = 100,.maxPower = 500, "ӡ������"},

};

void Init()//��ʼ����Ϸ����
{

}
void Show()//��ʾȫ������
{
    int propCount = sizeof(propArray)/sizeof(Prop);
    int i;
    for(i = 0; i < propCount; i++)
    {
        printf("%d\t%s\t%0.1f\n", propArray[i].id, propArray[i].name,propArray[i].price);
        switch(propArray[i].type){
        case Weapon:
            printf("��С��������%d\t��󹥻���%d��\n", propArray[i].minAttack,propArray[i].maxAttack);
            break;
        case Armor:
            printf("��С��������%d\t����������%d\n", propArray[i].minDefence, propArray[i].maxDefence);
            break;
        }
    }
}
