#include <iostream>
using namespace std;

string num[51];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	
	// Y,N 涝仿罐扁
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int ans = 0; // 模备 啊厘 腹篮 荐

	for (int x = 0; x < n; x++) {
		bool c[51] = { false };
		int count = 0;

		// 1. x狼 模备 热扁
		for (int y = 0; y < n; y++) {
			if (x == y) continue;

			// 2. 流立 模备
			if (num[x][y] == 'Y') {
				c[y] = true;
			}
			else {
				// 3. 模备狼 模备 咯何
				for (int z = 0; z < n; z++) {
					if (num[x][z] == 'Y' && num[z][y] == 'Y') {
						c[y] = true;
						break;
					}
				}
			}
		}

		for (int j = 0; j < n; j++) {
			if (c[j]) {
				count++;
			}
		}
		ans = max(ans, count);
		
	}

	cout << ans;
}