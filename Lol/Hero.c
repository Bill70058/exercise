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
    {1,"��ʦ", "ţ��"},
    {2,"սʿ", "¬��ΰ"},
    {3,"����", "xdd"},
    {4,"�̿�", "pdd"},
    {5,"��ʦ", "��ī����"},

};

void InputHero()
{
    //��̬¼��
    int i,j;
    int jobChoice;
    for(i = 0; i < 1; i++){
        printf("�������%dλӢ�۵�id", i + 1);
        heros[i].id = i + 1;
        printf("���ƣ�");
        heros[i].name = (char*)malloc(50);
        scanf("%s",heros[i].name);
        //printf("�Ա�");
        //scanf("%c", &heros[i].sex);
        fflush(stdin);//���õ�ϰ�ߣ�¼���ַ���ǵ���ջ�����
        for(j = 0; j < 5; j++)
        {
            printf("%s\n",jobs[i].name);
        }
        printf("��ѡ��ְҵ����1-5֮���������");
        scanf("%d",&jobChoice);
        heros[i].job = jobs[jobChoice - 1];
        printf("%s��ǰ��ְҵ����%s��\n",heros[i].name,heros[i].job.name);
    }


}
