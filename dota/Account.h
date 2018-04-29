#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct _account
{
    char *bankName;
    char *userName;
    double limit;
    double billAmount;
}Account;
double GetRepayment(const Account *account);


#endif // ACCOUNT_H_INCLUDED
