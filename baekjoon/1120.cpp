#include <iostream>

using namespace std;

string a;
string b;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;

	int count = 0;
	// a랑 b랑 길이가 같으면 개수 바로 세면 됨.
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			// 개수가 다르면 count 증가.
			if (a[i] != b[i]) {
				count++;
			}
		}
	}
	// 길이가 다르면 앞에 붙이는 거랑 뒤에 붙이는 거 비교를 해야됨.
	else {
		// a랑 b랑 비교해서 가장 적은 차이인 것만 고르면 된다..?

		int x = a.length();
		int y = b.length();
		int z = y - x;
		int min = 51;
		for (int i = 0; i <= z; i++) {
			int cc = 0;
			for (int j = 0; j < x; j++) {
				if (a[j] != b[j+i]) {
					cc++;
				}
			}
			if (cc < min) {
				min = cc;
			}
		}
		count = min;
		
	}
	cout << count;

}