#include <iostream>
using namespace std;

int arr[11];
int result[11];

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// arr[0]일 때 6니까 6번 6칸 뛰고 1 넣고
	// arr[1]일 때 1이니까 1칸 건너뛰고 1 넣고

	for (int i = 0; i < n; i++) {
		int a = arr[i];
		
		int count = 0;
		int index = 0;

		while (a != count) {
			if (result[index] == 0) {
				index++;
				count++;
			}
			else {
				index++;
			}
		}

		while (result[index] != 0) {
			index++;
		}

		result[index] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}

}