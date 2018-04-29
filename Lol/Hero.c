#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"

/**
    int id;
    char *name;
    char *sex;
    Job job;
    double hp;
    double speed;
    Abillity abillity[5];
    PubTime pubTime;
**/




Hero heros[5];
Job jobs[] = {
    {1,"法师", "牛逼"},
    {2,"战士", "卢本伟"},
    {3,"射手", "xdd"},
    {4,"刺客", "pdd"},
    {5,"牧师", "轩墨宝宝"},

};

void InputHero()
{
    //动态录入
    int i,j;
    int jobChoice;
    for(i = 0; i < 1; i++){
        printf("请输入第%d位英雄的id", i + 1);
        heros[i].id = i + 1;
        printf("名称：");
        heros[i].name = (char*)malloc(50);
        scanf("%s",heros[i].name);
        //printf("性别：");
        //scanf("%c", &heros[i].sex);
        fflush(stdin);//良好的习惯：录入字符后记得清空缓冲区
        for(j = 0; j < 5; j++)
        {
            printf("%s\n",jobs[i].name);
        }
        printf("请选择职业：（1-5之间的整数）");
        scanf("%d",&jobChoice);
        heros[i].job = jobs[jobChoice - 1];
        printf("%s当前的职业：《%s》\n",heros[i].name,heros[i].job.name);
    }


}
