#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long cal(int x[], int y[]) {
	long long dx = x[0] - y[0];
	long long dy = x[1] - y[1];
	return dx * dx + dy * dy;
}

int main() {

	int t;
	cin >> t;
	

	for (int j = 0; j < t; j++) {
		int n[4][2];


		for (int i = 0; i < 4; i++) {
			cin >> n[i][0] >> n[i][1];
		}

		long long result[6];
		int c = 0;
		for (int i = 0; i < 3; i++) {
			for (int q = i + 1; q < 4; q++) {
				result[c] = cal(n[i], n[q]);
				c++;
			}
		}
		sort(result, result + 6);

		if (result[0] == result[1] && result[1] == result[2] && result[2] == result[3] && result[4] == result[5]) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

}