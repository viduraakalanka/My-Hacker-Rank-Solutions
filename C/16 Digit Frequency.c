#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *word ;
    int   is_num;
    word = (char*)malloc(1024*sizeof(char));

    scanf("%s", word);
    word = realloc(word, strlen(word) + 1);

    int counter_list [10] = {0,0,0,0,0,0,0,0,0,0};

    int length = strlen(word);

    for(int i=0; i<length; i++){
        //printf("%c",word[i]);
        is_num = word[i]-'0';
        for (int j=0; j<10; j++){

            if(is_num==j){
                counter_list[j] +=1;a
            }

        }
    }

    for (int k = 0; k < 10; k++) {
        printf("%d ",counter_list[k]);
    }

    free(word);
    return 0;
}

//////////////////////////////ALTERNATIVE APPROACH///////////////////////////

int main() {
    int* nums = (int*) malloc(10 * sizeof(int));
    char c;

    for(int i = 0; i < 10; i++)
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;

    for(int i = 0; i < 10; i++)
        printf("%d ", *(nums+i));

    return 0;
}

////////////////////////////////////////////////////////////////////////////
