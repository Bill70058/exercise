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
    Account account = {"建设银行", "杰克逊", 30000,28000};
    double result = GetRepayment(&account);
    printf("应还款:%.2lf\n", result);
    printf("更改后银行为：%s", account.bankName);
    return 0;
}
