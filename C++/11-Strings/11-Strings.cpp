#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
	getline(cin,a);
    getline(cin,b);

    int len_a = a.size();
    int len_b = b.size();

    string combined = a+b;

    string a_dash = a;
    a_dash[0]=b[0];
    string b_dash = b;
    b_dash[0] = a[0];

    printf("%d %d\n",len_a, len_b);
    cout<<combined<<"\n";
    cout<<a_dash<<" "<<b_dash;

    return 0;
}
