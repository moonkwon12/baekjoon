#include <iostream>

using namespace std;

int s[51];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int l, n;
	cin >> l;
	for (int i = 0;i < l;i++) {
		cin >> s[i];
	}
	cin >> n;

	int count = 0;

	for(int i = 0;i<l-1;i++){
		if (s[i] < s[i + 1] && s[i] < n && s[i+1] > n) {
			int h=0;
			for (int j = (s[i] + 1);j <= n;j++) {
				if (j < n) {
					int k = (s[i + 1] - 1) - n + 1;
					cout << "k´Â " << (s[i + 1] - 1) - n + 1;
					count += (s[i + 1] - 1) - n + 1;
					h++;
				}
				else if (j == n) {
					count += s[i + 1] - 1 - n;

				}
			}
			cout << "h´Â " << h << "\n";
		}
	}
	cout << count;

	return 0;
}