
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function
    *a = *a+*b;
    *b = abs(*a - *b - *b);
    //since we have added b to a in the previous step, we have to...
    //substract b twice from a inorder to get correct value for (a-b)
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", pa, pb);
    //printf("%d\n", abs(a-b));
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

