#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include "Account.h"
extern Hero heros[100];

int main()
{
    //printf("%s\n", heros[0].name);
    //Show();
    //Input();
    //Show();
    Account account = {"��������", "�ܿ�ѷ", 30000,28000};
    double result = GetRepayment(&account);
    printf("Ӧ����:%.2lf\n", result);
    printf("���ĺ�����Ϊ��%s", account.bankName);
    return 0;
}
