#include <iostream>
#include <algorithm>

using namespace std;

int a[50];
int b[50];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;


	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, greater<>());
	int sum = 0;

	for (int i = 0;i < n;i++) {
		
		sum = sum + ( a[i] * b[i] );
		
	}

	cout << sum;
	
	return 0;
}