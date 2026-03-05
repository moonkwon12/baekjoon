#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a, b;
	int k = n;
	int count = 0;
	do {
		int x = n / 10;
		int y = n % 10;
		int z = x + y;
		n = (y * 10) + (z % 10);
		
		count++;
	} while (n != k);

	cout << count;
}