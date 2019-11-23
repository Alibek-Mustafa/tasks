#include <iostream>             
using namespace std;
int main() {
	int a;
	cin >> a;
	int y = 0;
	for (int i = 1; i <= a; i++) {
		y = y+i;
	}
	cout << y << endl;
}