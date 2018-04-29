#include <stdio.h>
#include <stdlib.h>
#define N 5


int array()
{
    int i,j;
    int temp;
    int nums[N] = {16,25,9,90,23};
    //外层循环控制 轮数
    for(i = 0; i < N - 1; i++){
        //内层循环控制 每轮的比较次数
        for(j = 0; j < N - i - 1; j++){
            //如果当前值小于后面一个值，就交换
            if(nums[j] < nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

        }
    }
    printf("排序后的结果是：\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }

/**
    for(i = 0; i < N - 1; i++){
        //内层循环控制 每轮的比较次数
        for(j = 0; j < N - i - 1; j++){
            //如果当前值小于后面一个值，就交换
            if(nums[j] > nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

        }
    }
    printf("排序后的结果是：\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }
    **/
        for(i = 0; i < N/2; i++){
            temp = nums[i];
            nums[i] = nums[N - i - 1];
            nums[N - i - 1] = temp;
        }
        printf("\n排序后的结果是：\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }
}
