#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//��ѯ�Զ��ۻ�������Ʒ�ļ۸񡣼����Զ����ۻ�������4����Ʒ��
//��Ƭ��crisps�������׻���popcorn�����ɿ�����chocolate���Ϳ��֣�cola����
//�ۼ۷ֱ���ÿ��3.0��2.5��4.0��3.5Ԫ������Ļ����ʾ���²˵�����ź�ѡ���
//�û�����������ѯ��Ʒ�ļ۸񣬵���ѯ��������5��ʱ���Զ��˳���ѯ������5��ʱ��
//�û�����ѡ���˳������û�������1~4����ʾ��Ӧ��Ʒ�ļ۸񣨱���1λС������
//����0���˳���ѯ������������ţ���ʾ�۸�Ϊ0��
int main()
{
    float crisps,popcorn,chocolate,cola;
    int choice;
    int i = 0;//i need a number caculate the wheel
    crisps = 3.0;
    popcorn = 2.5;
    chocolate = 4.0;
    cola = 3.5;
    while(1)
    {
        printf("input you want enquiries commodity,we have:\n");
        printf("1.crisps\t 2.popcorn\t 3.chocolate\t 4.cola\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("crisps is 3.0 dollar.\n");
            i++;
            break;
        case 2:
            printf("popcorn is 2.5 dollar.\n");
            i++;
            break;
        case 3:
            printf("chocolate is 4.0 dollar.\n");
            i++;
            break;
        case 4:
            printf("cola is 2.5 dollar.\n");
            i++;
            break;
        case 5:
            exit(0);
            break;
        }
        if(i == 5)
        {
            printf("you already choice quintic system will constraint quit");
            exit(0);

        }
    }

    return 0;
}
