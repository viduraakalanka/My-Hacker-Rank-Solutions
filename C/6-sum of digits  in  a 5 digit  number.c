#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;
    int total=0;
    int number_array [5];

    scanf("%d", &n);

    for (i=0; i<5; i++){
        number_array[i]= n%10;
        n = n/10;
    }

    for (j=0;j<5;j++){
        total += number_array[j];
    }

    printf("%d",total);
    return 0;
}
