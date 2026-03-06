#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	vector<vector<int>> box(n, vector<int>(m));
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1) {
				q.push({ i,j });
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		int dx[4] = { -1,1,0,0 };
		int dy[4] = { 0,0,-1,1 };

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

			if (box[nx][ny] == 0) {
				box[nx][ny] = box[x][y] + 1;
				q.push({ nx,ny });
			}
		}
	}

	int maxDay = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (box[i][j] == 0) {
				cout << -1;
				return 0;
			}
			maxDay = max(maxDay, box[i][j]);
		}
	}

	cout << maxDay - 1;
	
}