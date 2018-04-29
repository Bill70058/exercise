#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED


typedef struct _mytime
{
    int year;
    int month;
    int day;
}MyTime;

typedef struct _hero
{
    char *name;
    char sex;
    char *job;
    int life;
    double speed;
    char *abillity;
    MyTime pubTime;//Ӣ������ʱ��

}Hero;

void Show();
void Input();

#endif // HERO_H_INCLUDED
