#include <stdio.h>
//#include <cstdlib>

void update(int *a,int *b) {
    int max1;
    int x = *a;
    int y = *b;

    //*a = x+y;
    //*b = abs(x-y);

    if ( x < y){
        max1 = y;
        (*a) = max1 + x;
        (*b) = max1 - x;
    }
    else{
        max1 = x;
        (*a) = max1 + y;
        (*b) = max1 - y;
    }

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
