#include<stdio.h>
#include <iostream>
#include <cstdlib>
#pragma warning(disable:4996)
#include<time.h>
#include <windows.h>
#define ROW 11
#define COL 11
#define DEFAULT 10

using namespace std;

void menu();
void init_board(char mine[ROW][COL], char show[ROW][COL]);  //��ʼ������
void display_board(char show[ROW][COL]);                    //��ӡ����
void set_mine(char mine[ROW][COL]);                         //����
int get_mine(char mine[ROW][COL], int x, int y);            //ͳ�Ƹ�λ����Χ�׵ĸ���
void mine_sweep(char mine[ROW][COL], char show[ROW][COL]);   //ɨ��
void game();                                                 //����Ϸ
int main()
{
    int input = 1;
    menu();
     while (input)
    {
        printf("��ѡ��\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("�˳�����\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("����ָ��������ѡ��\n");
            break;
        }
    }
    system("pause");
    return 0;
}
void menu()
{
    printf("###########ɨ��#########\n");
    printf("####0��start||1:exit####\n");
    printf("########################\n");
}
void init_board(char mine[ROW][COL], char show[ROW][COL])
{
    int i = 0;
    int j = 0;
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            mine[i][j] = '0';
        }
    }
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            show [i][j] = '*';
        }
    }
}
void display_board(char show[ROW][COL])
{
    int i, j;
    printf("  ");
    for (i = 1; i < COL - 1; i++)
        printf("%d ", i);
    printf("\n");
    for (i = 1; i < ROW - 1; i++)
    {
        printf("%d ", i);
        for (j = 1; j < COL - 1; j++)
        {
            printf("%c ", show[i][j]);
        }
        printf("\n");
    }
}
void set_mine(char mine[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = DEFAULT;
    srand((unsigned)time(NULL));
    while (count)
    {
        x = rand() % (ROW-2) + 1;
        y = rand() % (COL-2) + 1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}
int get_mine(char mine[ROW][COL], int x, int y)
{
    int count = 0;
    if (mine[x - 1][y - 1] == '1')
        count++;
    if (mine[x - 1][y] == '1')
        count++;
    if (mine[x-1][y + 1] == '1')
        count++;
    if (mine[x][y - 1] == '1')
        count++;
    if (mine[x ][y + 1] == '1')
        count++;
    if (mine[x + 1][y - 1] == '1')
        count++;
    if (mine[x + 1][y] == '1')
        count++;
    if (mine[x + 1][y + 1] == '1')
        count++;
    return count;
}
void mine_sweep(char mine[ROW][COL], char show[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = 0;
    while (count != (ROW - 2)*(COL - 2) - DEFAULT)
    {
        printf("����������ROW��1-9��COL��1-9����");
            scanf("%d%d", &x, &y);
        if (mine[x][y] == '1')
        {
            printf("�ȵ����ˣ�\n");
            printf("�������̵�λ�ã�\n");
            display_board(mine);
            return;
        }
        else
        {
            int ret = get_mine(mine, x, y);
            show[x][y] = ret + '0';
            display_board(show);
        }
    }
    printf("ɨ�׳ɹ�\n");
}
void game()
{
    char mine[ROW][COL];
    char show[ROW][COL];
    init_board(mine, show);
    display_board(show);
    set_mine(mine);
    mine_sweep(mine, show);
}
