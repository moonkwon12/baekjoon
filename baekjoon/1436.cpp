#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;

	int i = 1;
	int a = 0;
	int b = 0;

	// 1의 묶음 개수 vs 0의 묶음개수해서 더 적은 개수
	char c = s[0];
	if (c == '0')
		a++;
	else
		b++;

	int len = static_cast<int>(s.length());

	while (i < len) {
		if (c == s[i]) {
			i++;
			continue;
		}
		else {
			c = s[i];
			if (c == '0')
				a++;
			else
				b++;
		}
	}

	cout << min(a, b);
}