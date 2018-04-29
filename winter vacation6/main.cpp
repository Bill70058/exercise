#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


//输入20个字符,统计其中英文字母,数字字符和其他字符的个数
int main()
{
    int a = 0;//字母的计量
    int b = 0;//数字的计量
    int c = 0;//符号的计量
    int n = 0;//不知道是什么
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
    printf("%d个英文字母\n%d个数字字符\n%d个空格或回车\n%d个其它字符\n",a,b,c,n);



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
   printf("%d个英文字母\n%d个数字字符\n%d个空格或回车\n%d个其它字符\n",b,c,d,e);
   return 0;
}
*/
