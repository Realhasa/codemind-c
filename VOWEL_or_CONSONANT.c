#include<stdio.h>
int main()
{
    char ch;
    int d;
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("VOWEL");//why we using kolon herein every alphabat

    }
    else{
        printf("CONSONANT");
    }
}