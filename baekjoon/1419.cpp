#include <iostream>

using namespace std;

int main() {
	int l, r, k;
	cin >> l >> r >> k;

	int count = 0;
	int min_val;
	int result;
	switch (k) {
	case 2:
		result = max(r - max(l, 3) + 1, 0);
		cout << result;
		break;
	
	case 3:
		count = 0;
		min_val = max(l, 6);
		for (int i = min_val; i <= r; ++i) {
			if (i % 3 == 0) {
				count++;
			}
		}
		cout << count;
		break;

	case 4:
		count = 0;
		min_val = max(l, 10);
		for (int i = min_val; i <= r; ++i) {
			if ((i % 2 == 0) && i != 12) {
				count++;
			}
		}
		cout << count;
		break;
	case 5:
		count = 0;
		min_val = max(l, 15);
		for (int i = min_val; i <= r; ++i) {
			if (i % 5 == 0) {
				count++;
			}
		}
		cout << count;
		break;

	default:
		cout << "";
	}
	return 0;
}