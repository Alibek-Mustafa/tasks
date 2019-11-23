#include<cmath>
#include <iostream>                      //95
using namespace std;
int main() {
	int a, y, b = 1;
	cin >> a >> y;
	for (int i = 1; i <= y; i++) {
		b *= pow((a + i), 2);
	}
	cout << b;
}