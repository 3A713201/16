#include <stdio.h> 

#include <stdlib.h>

#include <string.h>



int main()

{

    char num[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};

    char ch[3][3]={"�a","��","�B"};

    char wan[3][3]={"��","��","�U"};

    int a, d, len, group, start, digit, c=0, flag=0;

    char n[20];
    
    printf("�п�J�@�Ӿ��(���ƻݭn�p��16���)�G" );

    scanf("%s",n); 

    len = strlen(n);

    if (len>16)  

    {
    printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");

    exit(0);

    }

    group=(len-1)/4+1;

    printf("�ഫ�᪺���G�G");

    for(a=0;a<group;a++)

    {

    flag=0;

    if (a==0) start=(4-len%4)%4;

    else start=0;

    for (d=start;d<4;d++)

    {

    digit=n[c++]-48;

    if(digit==0) continue; 

    printf("%s",num[digit]);

    if(d!=3) 

    printf("%s",ch[d]);

    flag=1;

    }

   if (group!=1 && a!=group-1 && flag!=0)

    {

    printf("%s",wan[4-group+a]);

    }

    }

    printf("\n");

    system("pause");

    return 0;

}


