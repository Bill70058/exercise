#include <stdio.h>
#include <stdlib.h>

struct Martial
{
    int id;
    char name[50];
    int count;
    int type;

};
struct Player
{
    int id;
    char name[50];
    char pass[50];
    char sex;
    struct Martial martial;
};
int main()
{
    //���Player
    //Martial�����������
    //struct Player player = {1,"Bill", "123456", 'f', {1,"�����˹", 500, 3}};
    struct Player player2 = {1,"cucumber", "123456", 'm', {1,"�ƹ���", 500, 3}};
    struct Player *ptr_player2 = &player2;

    //printf("%s\t%s\n", (*ptr_player2).name,(*ptr_player2).martial.name);
    printf("%s\t%s\n", ptr_player2->name,ptr_player2->martial.name);
}
