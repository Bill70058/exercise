#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


//����20���ַ�,ͳ������Ӣ����ĸ,�����ַ��������ַ��ĸ���
int main()
{
    int a = 0;//��ĸ�ļ���
    int b = 0;//���ֵļ���
    int c = 0;//���ŵļ���
    int n = 0;//��֪����ʲô
    char d[20];

    for(int i = 0; i <= 20;i++)
    {

        scanf("%c", &d[i]);
         if((d[n]>='a'&&d[n]<='z')|(d[n]>='A'&&d[n]<='Z'))
            a++;
            else if(d[n]>='0'&&d[n]<='9')
            b++;
            else if((d[n]==' ')||(d[n]='\n'))
            c++;
            else n++;

    }
    cout << endl;
    printf("%d��Ӣ����ĸ\n%d�������ַ�\n%d���ո��س�\n%d�������ַ�\n",a,b,c,n);



    return 0;
}

/*
#include <stdio.h>
int main( )
{
  int b=0,c=0,d=0,e=0,n;
  char a[20];
  for(n=0;n<20;n++)
   scanf("%c",&a[n]);
   {
   for(n=0;n<20;n++)
   if((a[n]>='a'&&a[n]<='z')|(a[n]>='A'&&a[n]<='Z'))
   b++;
   else if(a[n]>='0'&&a[n]<='9')
   c++;
   else if((a[n]==' ')||(a[n]='\n'))
   d++;
   else e++;
   }
   printf("%d��Ӣ����ĸ\n%d�������ַ�\n%d���ո��س�\n%d�������ַ�\n",b,c,d,e);
   return 0;
}
*/
