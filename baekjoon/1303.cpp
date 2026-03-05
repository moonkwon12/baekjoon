#include <iostream>

using namespace std;

int n, m, w, b;
char map[100][100];
int visit[100][100];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int tmp;

void solve(int x, int y) {
	if (visit[x][y]) return;
	tmp++;
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int cx = x + dx[i];
		int cy = y + dy[i];
		if (cx >= 0 && cx < m && cy >= 0 && cy < n && !visit[cx][cy] && map[cx][cy] == map[x][y]) {
			solve(cx, cy);
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				tmp = 0;
				// dfs Å½»ö
				solve(i, j);
				if (map[i][j] == 'W') w += tmp * tmp;
				else b += tmp * tmp;
			}
		}
	}

	cout << w << " " << b;
	

}