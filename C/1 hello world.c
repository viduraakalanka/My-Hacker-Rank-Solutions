#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);
    //above regular expression is store the phrases (prase - collection of words seperated by spaces)
    //entered into std input delimetered by a newline character
    printf("Hello, World!\n%s",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

