#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    map <string,int> m;
    int q,y, type;
    string x;
    
    cin >> q;
    
    for (int i=0; i<q; i++){
        cin >> type >> x;
        
        if (type ==1){
            cin >> y;
            if (m.find(x)==m.end()){
                m.insert(make_pair(x,y));
            }
            else{
                m[x] +=y;
            }
        }
        else if (type ==2){
            m.erase(x);
        }
        else{
            if (m.find(x)==m.end()){
                cout << 0 << endl;
            }
            else{
                cout << m[x] << endl;
            }
        }
        
    }
    return 0;
}



