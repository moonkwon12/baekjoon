#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int num[1000][5];
int arr[1000];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;

	cin >> n;
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < 5;j++) {
			cin >> num[i][j];
		}
	}

	for (int a = 0;a < n;a++) {
		for (int j = 0;j < 5;j++) {
			int k = num[a][j];
			for (int i = 1;i < n;i++) {
				if (num[i][j] == k && i != a) {
					arr[a]++;
					break;
				}
			}
		}
	}
	
	int max = -1;
	int b = -1;
	for (int i = 0;i < n;i++) {
		if (arr[i] > max) {
			max = arr[i];
			b = i+1;
		}
	}
	cout << b;
	

	return 0;
}