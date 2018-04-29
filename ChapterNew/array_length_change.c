#include <stdio.h>
#include <stdlib.h>

int change()
{
    int count = 5; //array element number
    double  powers[] = {42322, 45771, 40907, 41234, 40767};
    double deletePower; //delete number
    int deleteIndex = -1;    //delete number subscript,initial give a impossible price£¬EOF
    int i;
    double insertPower;//new insertion element
    printf("plese input you want delete number:");
    scanf("%lf", &deletePower);
    for(i = 0; i < count; i++){
        if(deletePower == powers[i]){
            deleteIndex = i;//remember the subscript
            break;
        }
    }
    //judge if finding the number subscript
    if(-1 == deleteIndex){
        printf("sorry,don`t finding the number,delete failed.");
    }
    else
    {
        //if find the number
        for(i = deleteIndex; i < count - 1; i++){
            powers[i] = powers[i + 1];

        }
    }
    printf("removing after array:\n");
    for(i = 0 ; i < count - 1; i++){
        printf("%.2lf\t", powers[i]);
    }
    //insertion new element
    printf("\nplese insertion new element:");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    //array length recover
    count++;
    for(i = 0 ; i < count - 1; i++){
        printf("%.2lf\t", powers[i]);
    }

}
