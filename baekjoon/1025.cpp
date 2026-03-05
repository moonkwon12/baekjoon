#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int n, m;
int ans = -1;
int arr[10][10];

bool isSquare(int num) {
	int root = (int)sqrt(num);
	return root * root == num;
}

int main() {
	cin >> n >> m;
	string tmp = "";

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		for (int j = 0; j < m; j++) {
			arr[i][j] = (int)tmp[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int x = -n; x < n; x++) {
				for (int y = -m; y < m; y++) {
					if (x == 0 && y == 0) continue;
					int a = i, b = j;
					int now = 0;
					while (a >= 0 && a < n && b >= 0 && b < m) {
						now *= 10;
						now += arr[a][b];
						if (isSquare(now)) ans = max(ans, now);
						a += x;
						b += y;
					}
					if (isSquare(now)) ans = max(ans, now);
				}
			}
		}
	}

	cout << ans;
}