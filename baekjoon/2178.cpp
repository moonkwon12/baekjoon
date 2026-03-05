#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<string> board;
vector<vector<int>> dist;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs() {
	queue<pair<int, int>> q;

	dist[0][0] = 1;
	q.push({ 0,0 });

	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		int x = cur.first;
		int y = cur.second;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;

			if (board[nx][ny] == '0')
				continue;

			if (dist[nx][ny] != -1)
				continue;

			dist[nx][ny] = dist[x][y] + 1;
			q.push({ nx,ny });
		}
	}
}


int main() {
	cin >> n >> m;

	board.resize(n);
	for (int i = 0; i < n; i++)
		cin >> board[i];

	dist.assign(n, vector<int>(m, -1));

	bfs();

	cout << dist[n - 1][m - 1];
}