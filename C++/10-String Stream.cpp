#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> int_vector;
    stringstream ss(str);
    int val;
    char c;
    for (int i=0;ss>>val;i++){
        int_vector.push_back(val);
        ss>>c;

    }
    return int_vector;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
