
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

##############################MY ANSWER###############################################

// in C double quotes are for strings and single quotes are for chaaracters
// char var = 'a' -> correct char var = 'apple' -> wrong
// char var[] = "a"  and char var[] = "apple" -> both correct

int main() {

    char *s;
    s = malloc(1024 * sizeof(char)); //can store 1024 characters
    scanf("%[^\n]", s);

    s = realloc(s, strlen(s) + 1);
    // The C library function void *realloc(void *ptr, size_t size) attempts to
    // resize the memory block pointed to by ptr that was previously allocated
    // with a call to malloc or calloc. Write your logic to print the tokens of

    char delim[] = " ";
    char *ptr  = strtok(s, delim);

    while (ptr != NULL) {
      printf("%s\n", ptr);
      ptr = strtok(NULL, delim);
    }

    return 0;
}



##################################ALTERNATE ANSWER#####################################

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    free(s);
    return 0;
}
