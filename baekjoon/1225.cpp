#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	long long sum = 0;
	if (a[0] == '0' || b[0] == '0') {
		cout << '0';
		return 0;
	}

	for (int i = 0;i < a.length();i++) {
		for (int j = 0;j < b.length();j++) {
			int x = (int)a[i] - '0';
			int y = (int)b[j] - '0';
			sum = sum + (x * y);
		}
	}
	
	cout << sum;

	return 0;
}