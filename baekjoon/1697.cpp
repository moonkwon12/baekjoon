#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	const int MAX = 100000;

	vector<int> dist(MAX + 1, -1);
	queue<int> q;

	dist[n] = 0;
	q.push(n);

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		int nexts[3] = { x - 1,x + 1,x * 2 };
		for (int i = 0; i < 3; i++) {
			int nx = nexts[i];
			if (nx<0 || nx>MAX) continue;
			if (dist[nx] != -1) continue;

			dist[nx] = dist[x] + 1;
			q.push(nx);
		}
	}
	cout << dist[k];
 
}