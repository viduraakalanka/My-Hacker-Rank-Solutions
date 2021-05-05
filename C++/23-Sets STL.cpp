#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q,x,y;
    set <int>s;
    
    cin >> q;
    
    for (int i=0; i<q; i++){
        cin >> y;
        cin >> x;
        
        if (y==1){
            s.insert(x);
        }
        else if (y==2){
            s.erase(x);
        }
        else if (y==3){
            if (s.end()==s.find(x)){
                cout << "No" << "\n";
            }else{
                cout << "Yes" << "\n";
            }
        }
    }
      
    return 0;
}
