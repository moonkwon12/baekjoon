/*
	시간복잡도는 O(n + m)이다
	1 ~ n번까지의 정점개수 +  모든 간선 2번씩(무방향 그래프)

	이 알고리즘의 시간복잡도는 O(N + M)입니다.
	모든 정점은 최대 한 번 방문되고,
	모든 간선은 무방향 그래프 기준 최대 두 번 탐색되기 때문입니다.
	따라서 DFS 전체 수행 비용은 선형 시간입니다.
	빅오 표기법에서 상수배는 무시한다. (원래는 2M이지만 상수배이므로 M으로 표기)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> g[1001];
bool visited[1001];

void dfs(int v) {
	visited[v] = true;

	for (int next : g[v]) {
		if (!visited[next]) {
			dfs(next);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			count++;
		}
	}

	cout << count;
 }