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
    MyTime pubTime;//Ӣ������ʱ��
**/
Hero heros[100] = {
{"Ӱ��֮������", 'm', "�̿�", 579, 0.644, "λ��", {2012,8,15}},
{"��ɪ��Ů�����", 'f', "��ʦ", 482, 0.644, "���١�����", {2010,9,20}},
{"���罣��", 'm', "սʿ", 517, 0.67, "���ܡ�λ��", {2013,12,23}}

};

int count = 3;//��ǰӢ������
void Input()
{
    //����¼������
    //��һ����Ϻ�ѯ���Ƿ����¼��
    char answer = 'y';
    do{
            if((count == 100)){
                printf("�����������뵽�̳ǹ���");
                break;
            }
            printf("��ǰ¼���%dλӢ�۵���Ϣ��\n",count + 1);
            printf("Ӣ�����ƣ�");
            heros[count].name = (char*)malloc(50);
            scanf("%s",heros[count].name);
            printf("�Ա�");
            fflush(stdin);
            heros[count].sex = getchar();
            fflush(stdin);
            printf("ְҵ��");
            heros[count].job = (char*)malloc(50);
            scanf("%s", heros[count].job);
            heros[count].life = 1000;
            heros[count].speed = 5.56;
            heros[count].abillity = "����ݵ�";
            heros[count].pubTime.year = 2018;
            heros[count].pubTime.month = 4;
            heros[count].pubTime.day = 14;
        count++;
        printf("�Ƿ����¼��Ӣ����Ϣ?(y/n)");
        answer = getch();
    }while(answer == 'y'|| answer == 'Y');
}

void Show()
{
    //�ṹ�����С���������С��������
    //int len = sizeof(heros)/ sizeof(Hero);
    int i;
    printf("\n");
    for(i = 0; i < count; i++)
    {
        printf("%s\t%s\t%d-%d-%d\n",heros[i].name,heros[i].job,heros[i].pubTime.year,heros[i].pubTime.month,heros[i].pubTime.day);
    }
}
