//#include <cstdio>
//#include<algorithm>
//#include<queue>
//#include<vector>
//
//using namespace std;
//const int N = 1010;
//const int dx[] = { 0,0,-1,1 };
//const int dy[] = { -1,1,0,0 };
//struct node {
//	int x, y;
//};
//char maze[N][N];
//int vis[N][N], block[N][N];//访问数组和记录(i,j)所属连通块的格子数量
//int n, m, a, b, ans;
//void bfs() {
//	node now, nx;
//	queue<node> q;
//	vector<node> pos;//记录连通块内的格子坐标
//	q.push({ a,b });
//	vis[a][b] = 1;
//	ans = 1;//计数连通块内的格子数量
//	while (!q.empty()) {
//		now = q.front(), q.pop();
//		pos.push_back(now);
//		for (int i = 0; i < 4; i++) {
//			nx.x = now.x + dx[i], nx.y = now.y + dy[i];
//			if (!maze[nx.x][nx.y] || vis[nx.x][nx.y] || maze[now.x][now.y] == maze[nx.x][nx.y]) continue;
//			vis[nx.x][nx.y] = 1;
//			ans++;
//			q.push(nx);
//
//		}
//	}
//	//该连通块搜索完毕，赋值即可
//	for (auto v : pos) block[v.x][v.y] = ans;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) scanf("%s", maze[i] + 1);//下标从1开始
//	while (m--) {
//		scanf("%d%d", &a, &b);
//		if (!block[a][b]) bfs();//若a,b所在连通块还没搜索过，执行搜索
//		printf("%d\n", block[a][b]);
//	}
//	return 0;
//}