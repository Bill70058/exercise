#include <stdio.h>
#include <stdlib.h>
#define N 5


int array()
{
    int i,j;
    int temp;
    int nums[N] = {16,25,9,90,23};
    //���ѭ������ ����
    for(i = 0; i < N - 1; i++){
        //�ڲ�ѭ������ ÿ�ֵıȽϴ���
        for(j = 0; j < N - i - 1; j++){
            //�����ǰֵС�ں���һ��ֵ���ͽ���
            if(nums[j] < nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

        }
    }
    printf("�����Ľ���ǣ�\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }

/**
    for(i = 0; i < N - 1; i++){
        //�ڲ�ѭ������ ÿ�ֵıȽϴ���
        for(j = 0; j < N - i - 1; j++){
            //�����ǰֵС�ں���һ��ֵ���ͽ���
            if(nums[j] > nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

        }
    }
    printf("�����Ľ���ǣ�\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }
    **/
        for(i = 0; i < N/2; i++){
            temp = nums[i];
            nums[i] = nums[N - i - 1];
            nums[N - i - 1] = temp;
        }
        printf("\n�����Ľ���ǣ�\n");
    for(i = 0; i < N; i++){
        printf("%d\t", nums[i]);
    }
}
