#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

typedef struct _job
{
    int id;
    char *name;
    char *desc;//ְҵ������

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
    double speed;//�����ٶ�
    Abillity abillity;//��������
    PubTime pubTime;//����ʱ��
}Hero;
void InputHero();

void ShowHero();


#endif // HERO_H_INCLUDED
