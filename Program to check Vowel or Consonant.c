#include<stdio.h>
int main()
{
    char C;
    scanf("%c",&C);
    if((C=='a'||C=='A')||(C=='e'||C=='E')||(C=='i'||C=='I')||(C=='o'||C=='O')||(C=='u'||C=='U'))
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}