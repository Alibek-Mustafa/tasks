#include <iostream>                      //94
using namespace std;

int main() {
	int y = 0;
	int a;
	cin >> a;
	for (double i = 0; i < a; i++) {
		y = (y*1.0) + 1 / (i + 1);

	}
	cout <<y << endl;
	return 0;
}