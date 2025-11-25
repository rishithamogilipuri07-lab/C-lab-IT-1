#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch;
    char s[24];
    char sen[100];
    scanf("%c %s",&ch,s);
    getchar();
    scanf("%[^ln]%*c",sen);
    return 0;
}
