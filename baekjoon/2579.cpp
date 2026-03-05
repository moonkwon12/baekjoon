#include <iostream>
#include <string>

using namespace std;

string s[11];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int a = 0;

	for (int i = 0; i < n; i++) {
		a += s[i].size();
	}

	int length = m - a;
	
	int add = length / (n-1);
	
	int left = length % (n-1);

	string result = "";

	for (int i = 0; i < left; i++) {
		
		int k = 1;
		
		while (k <= n-1) {
			if (s[k][0] != '_' && s[k][0] >= 'a') {
				break;
			}
			k++;
		}

		if (k == n) {
			k = k - 1;
			while (k>0) {
				if (s[k][0] == '_') {
					k--;
					continue;
				}
				else {
					s[k].insert(0, "_");
					break;
				}
			}
			continue;
		}

		s[k].insert(0, "_");

	}

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			result += s[i];
		}
		else {
			for (int j = 0; j < add; j++) {
				result += '_';
			}
			result += s[i];
		}
	}

	cout << result;

}