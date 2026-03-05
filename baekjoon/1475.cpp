#include <iostream>

using namespace std;

int arr[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	while (n > 0) {
		int k = n % 10;
		arr[k]++;
		n = n / 10;
	}

	int max = 0;
	// 6,9를 뺀 것중에 가장 많이 나온 숫자 체크
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}

	int count = arr[6] + arr[9];
	// 개수가 짝수
	if ((count % 2) == 0) {
		count = count / 2;
	}
	// 홀수
	else {
		count = (count / 2) + 1;
	}

	if (count > max) {
		max = count;
	}

	cout << max;
	

	return 0;
}