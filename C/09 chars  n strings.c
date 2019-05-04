#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s [25];
    char sentence [150];

    scanf("%c %s",&ch,s);
    //scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n%s\n%s",ch,s,sentence);

    return 0;
}

