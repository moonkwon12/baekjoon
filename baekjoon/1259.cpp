#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	while (true) {
		cin >> s;
		if (s == "0")
			break;
		int leng = s.length();
		int i = 0;
		for (i = 0;i < (leng/2);i++) {
			if (s[i] != s[leng - i - 1])
				break;
		}
		if (i != (leng / 2)) {
			cout << "no\n";
		}
		else {
			cout << "yes\n";
		}

	}

	return 0;
}