#include <iostream>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
	// 1. 길이가 같다면, 사전순으로
	if (a.length() == b.length()) {
		return a < b;
	}
	// 2. 길이가 다르다면, 짧은 순으로
	else {
		return a.length() < b.length();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string words[20001];
	// 단어 입력 받기
	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}

	sort(words, words + n,cmp);

	// 정렬된 내용 출력
	for (int i = 0; i < n; i++) {
		if (i > 0 && words[i] == words[i - 1]) { //같은 단어는 출력 x
			continue;
		}
		cout << words[i] << '\n';
	};

	return 0;
}