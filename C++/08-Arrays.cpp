#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    scanf("%d",&n);
    int int_array [n];

    for (int i=0; i<n; i++){
        cin >> int_array[i];
    }
    //printf("%d", int_array[4]);

    for (int j=n-1; j>=0; j = j-1){
        printf("%d ",int_array[j]);
    }
    return 0;
}
