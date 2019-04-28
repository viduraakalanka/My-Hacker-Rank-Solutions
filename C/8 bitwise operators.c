#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {

    int a,b;
    int and_ans, or_ans, xor_ans;
    int max_and_ans = 0, max_or_ans = 0, max_xor_ans = 0;

    for (b=1; b<=n; b++){

        for(a=1; a<b; a++){
            and_ans = a & b;
            or_ans  = a | b;
            xor_ans = a ^ b;

            if (xor_ans>max_xor_ans && xor_ans <  k){
                max_xor_ans = xor_ans;
            }

            if (and_ans > max_and_ans && and_ans < k) {
              max_and_ans = and_ans;
            }

            if (or_ans > max_or_ans && or_ans < k) {
              max_or_ans = or_ans;
            }
        }

    }
    printf("%d\n%d\n%d",max_and_ans,max_or_ans,max_xor_ans);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

