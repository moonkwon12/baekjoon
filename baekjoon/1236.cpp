#include <iostream>

using namespace std;

char c[51][51];
int x;
int y;

int main(void) {
	int n, m;
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> c[i][j];
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (c[i][j] == 'X')
				break;
			else {
				if (j == m - 1) {
					x++;
				}
			}
		}
	}
	for (int j = 0;j < m;j++) {
		for (int i = 0;i < n;i++) {
			if (c[i][j] == 'X')
				break;
			else {
				if (i == n - 1) {
					y++;
				}
			}
		}
	}

	if (x >= y) {
		cout << x;
	}
	else {
		cout << y;
	}
	return 0;
}