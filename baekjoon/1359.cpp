#include <iostream>
#include <string>

using namespace std;

string s[100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> s[i];
	}

	int count = 0;
	
	for (int i = 0;i < n;i++) {
		bool b[26] = {};
		int j = 0;
		for (j = 0;j < s[i].length();j++) {
			int k = s[i][j] - 'a';
			if (b[k] == false) {
				b[k] = true;
			}
			else {
				if(s[i][j] != s[i][j-1])
					break;
			}
		}
		if (j == s[i].length()) {
			count++;
		}

	}

	cout << count;


}