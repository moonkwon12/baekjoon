#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b;
	int res = 0;
	int n;
	cin >> a >> b >> n;
	if (a % b == 0) {
		cout << 0;
		return 0;
	}

	if (a > b)a = a % b;

	for (int i = 0;i < n;i++) {
		a *= 10;
		res = (int)(a / b);
		a = a % b;
	}
	cout << res;
	return 0;
}