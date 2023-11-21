#include<stdio.h>
#include<string.h>

int main()
{
    char s[5]={'s','a','\0','c','h'};
    char p[5];
    char t[5];
    int i;
    strcpy(p,s);
    memcpy(t,s,5);
    for(i=0;i<5;i++)
        printf("%c",p[i]);
        printf("\n");
    for(i=0;i<5;i++)
        printf("%c",t[i]);
    return 0;
}