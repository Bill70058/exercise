#include <stdio.h>
#include <stdlib.h>
#include "Account.h"

double GetRepayment(const Account *account)
{
    //account->bankName = "��������";
    return account->limit - account->billAmount;
}
