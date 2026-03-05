#include <iostream>

using namespace std;

int arr[51][51];


int maxRect(int n, int m) {
	
	if (n > m) {
		arr
	}
	else {

	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> arr[i][j];
		}
	}

	if (n == 1 || m == 1) {
		cout << 1;
		return 0;
	}
	else {
		int max = maxRect(n,m);
		cout << max;
	}
}