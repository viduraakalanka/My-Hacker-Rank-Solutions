#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    int N, temp, erase_pos, erase_begin, erase_end;
    
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> temp;
        v.push_back(temp);
    }  
    
    cin >> erase_pos;
    cin >> erase_begin;
    cin >> erase_end; 
    
    v.erase(v.begin()+(erase_pos-1));
    v.erase(v.begin()+(erase_begin-1),v.begin()+(erase_end-1));
    
    int size = v.size();
    cout << size << "\n";
    
    for (int i=0; i<size; i++){
        cout << v[i] << " ";    
    }
    
    return 0;
}
