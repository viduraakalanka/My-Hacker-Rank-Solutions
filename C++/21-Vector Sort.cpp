#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N,temp;
    vector <int> v;
    
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> temp;
        v.push_back(temp);
        
    }
    
    sort(v.begin(),v.end());
    
    for (int j=0; j<N; j++){
        cout << v[j] << " ";
    }
    
    return 0;
    
}