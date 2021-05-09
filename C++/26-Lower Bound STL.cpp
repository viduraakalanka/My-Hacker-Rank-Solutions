#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q,n,x,y;
    
    cin >> q;
    vector <int> vect;
    
    for (int i=0; i<q; i++){
        cin >> x;
        vect.push_back(x);
    }
    cin >> n;
    
    vector<int>::iterator lowb;
    
    for (int j=0; j<n; j++){
        cin >> y;
        lowb=lower_bound (vect.begin(), vect.end(), y);
        //found = find (vect.begin(), vect.end(), y);
        if (vect[lowb-vect.begin()]==y){
            cout << "Yes " << (lowb-vect.begin()+1) << endl;
        }
        else {
            
            cout << "No " << (lowb-vect.begin()+1) << endl;
        }
    }
    return 0;
}
