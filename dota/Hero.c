#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include <conio.h>

/**
    char name[50];
    char sex;
    char job[20];
    int life;
    double speed;
    char abillity[20];
    MyTime pubTime;//英雄上线时间
**/
Hero heros[100] = {
{"影流之主·劫", 'm', "刺客", 579, 0.644, "位移", {2012,8,15}},
{"琴瑟仙女·娑娜", 'f', "法师", 482, 0.644, "减速、治疗", {2010,9,20}},
{"疾风剑豪", 'm', "战士", 517, 0.67, "护盾、位移", {2013,12,23}}

};

int count = 3;//当前英雄总数
void Input()
{
    //首先录入内容
    //第一个完毕后，询问是否继续录入
    char answer = 'y';
    do{
            if((count == 100)){
                printf("背包已满，请到商城购买。");
                break;
            }
            printf("当前录入第%d位英雄的信息：\n",count + 1);
            printf("英雄名称：");
            heros[count].name = (char*)malloc(50);
            scanf("%s",heros[count].name);
            printf("性别：");
            fflush(stdin);
            heros[count].sex = getchar();
            fflush(stdin);
            printf("职业：");
            heros[count].job = (char*)malloc(50);
            scanf("%s", heros[count].job);
            heros[count].life = 1000;
            heros[count].speed = 5.56;
            heros[count].abillity = "飞天遁地";
            heros[count].pubTime.year = 2018;
            heros[count].pubTime.month = 4;
            heros[count].pubTime.day = 14;
        count++;
        printf("是否继续录入英雄信息?(y/n)");
        answer = getch();
    }while(answer == 'y'|| answer == 'Y');
}

void Show()
{
    //结构数组大小等于数组大小除以类型
    //int len = sizeof(heros)/ sizeof(Hero);
    int i;
    printf("\n");
    for(i = 0; i < count; i++)
    {
        printf("%s\t%s\t%d-%d-%d\n",heros[i].name,heros[i].job,heros[i].pubTime.year,heros[i].pubTime.month,heros[i].pubTime.day);
    }
}
