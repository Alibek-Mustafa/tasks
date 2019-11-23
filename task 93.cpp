#include <iostream>                     
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	int y = 0;
	for (int i = 1; i <= a; i++) {
		a = pow(i, 2.0);
		y=y + a;
		cout << a << "+";
	}
	cout << "==" << y << endl;
	return 0;
}