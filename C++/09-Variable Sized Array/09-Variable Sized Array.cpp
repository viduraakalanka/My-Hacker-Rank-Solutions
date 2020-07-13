#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int n,q;
    scanf("%d %d", &n, &q);
    vector <vector<int>> n_vector;
    int k,val;
    for (int i =0; i<n; i++){
        cin >> k;
        vector<int> i_vector;

        for (int j=0; j<k; j++){
            cin >> val;
            i_vector.push_back(val);
        }
        n_vector.push_back(i_vector);
    }

    for (int m=0; m<q; m++){
        int x,y;
        cin >> x >> y;
        printf("%d\n",n_vector[x][y]);
    }
    return 0;
}
