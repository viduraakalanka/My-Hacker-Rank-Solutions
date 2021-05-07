#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        cout << hex << showbase << nouppercase << left << (long)A << endl;
        
        cout << dec <<setfill('_') << setw(15) << right << showpos << setprecision(2) << fixed; 
        cout << B << endl;
        
        cout  << noshowpos << setprecision(9)<< scientific << uppercase ;
        cout << C << endl;

	}
	return 0;

}