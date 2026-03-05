#include <iostream>
using namespace std;

int main(void) {
	
	int line = 1;
	int x;
	cin >> x;

	// X가 위치한 대각선 찾기
	while (x - line > 0) {
		x -= line;
		line++;
	}

	// 대각선이 홀수일 때
	if (line % 2) cout << line + 1 - x << '/' << x;
	// 대각선이 짝수일 때
	else cout << x << '/' << line + 1 - x;

	return 0;
}