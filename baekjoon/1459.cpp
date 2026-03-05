#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	long long x, y, w, s;
	cin >> x >> y >> w >> s;

	// 1. 직선만 
	long long a = (x + y) * w;

	// 2. 직선 + 대각선
	long long b;
	int minXY = min(x, y);
	int maxXY = max(x, y);
	b = minXY * s + (maxXY - minXY) * w;

	// 3. 대각선으로만 이동
	long long c = (x + y) % 2 == 0 ? maxXY * s : (maxXY - 1) * s + w;

	cout << min({ a,b,c }) << "\n";

}
