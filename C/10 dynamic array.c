#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,total=0,i=0;
    scanf("%d",&n);

    int *int_array = malloc(n*sizeof(int));

    for (i;i<n;i++){
        scanf("%d",&int_array[i]);
        total += int_array[i];
    }

    printf("%d",total);
    return 0;
}
