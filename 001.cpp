#include <stdio.h> 

#include <stdlib.h>

#include <string.h>



int main()

{

    char num[10][3]={"箂","滁","禠","把","竩","ヮ","嘲","琺","","╤"};

    char ch[3][3]={"","ㄕ","珺"};

    char wan[3][3]={"","货","窾"};

    int a, d, len, group, start, digit, c=0, flag=0;

    char n[20];
    
    printf("叫块俱计(计惠璶16计)" );

    scanf("%s",n); 

    len = strlen(n);

    if (len>16)  

    {
    printf("俱计禬筁16计, 礚猭锣传...\n");

    exit(0);

    }

    group=(len-1)/4+1;

    printf("锣传挡狦");

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


