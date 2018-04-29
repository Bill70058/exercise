#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

typedef struct _job
{
    int id;
    char *name;
    char *desc;//职业的描述

}Job;
typedef struct _abillity
{
    int id;
    char *name;
    char *intro;

}Abillity;
typedef struct _pubTime
{
    int year;
    int month;
    int day;
}PubTime;
typedef struct _hero
{
    int id;
    char *name;
    char sex;
    Job job;
    double hp;
    double speed;//攻击速度
    Abillity abillity;//特殊能力
    PubTime pubTime;//创建时间
}Hero;
void InputHero();

void ShowHero();


#endif // HERO_H_INCLUDED
