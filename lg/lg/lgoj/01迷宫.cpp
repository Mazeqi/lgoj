//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//
//
//
//int n, m;//n是地图，m是查询的子列
//int map[1010][1010];
//int tot = 0;
//int vis[1010][1010] = { 0 };
//int walk[1010][1010] = {0};
//
////sx,sy是起点
//void bfs(int sx,int sy)
//{
//	memset(vis,0,sizeof(vis));
//	queue<int>qx, qy;
//	qx.push(sx);
//	qy.push(sy);
//	vis[sx][sy] = 1;
//	tot = 1;
//
//	int next[4][2] = {
//		{0,1},
//		{1,0},
//		{0,-1},
//		{-1,0}
//	};
//
//	int x = 0, y = 0;
//	while (!qx.empty())
//	{
//		int dx = qx.front();
//		int dy = qy.front();
//		for (int i = 0; i <= 3; i++)
//		{
//			x = dx + next[i][0];
//			y = dy + next[i][1];
//
//			if (!map[x][y]|| vis[x][y] || map[x][y] == map[dx][dy])
//			{
//				continue;
//			}
//			vis[x][y] = 1;
//			tot++;
//			qx.push(x);
//			qy.push(y);
//		}
//		qx.pop();
//		qy.pop();
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			if (vis[i][j])walk[i][j] = tot+1;
//		}
//	}
//
//}
//		
//
//int main()
//{
//
//	scanf("%d%d",&n,&m);
//	getchar();
//
//	//读入地图
//	char c;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &c);
//			if (c == '0')
//			{
//				map[i][j] = 0;
//			}
//			else if (c == '1')
//			{
//				map[i][j] = 1;
//			}
//	
//		}
//		getchar();
//	}
//
//	int rx, ry;
//	//读入坐标
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d",&rx,&ry);
//		if(!walk[rx-1][ry-1])bfs(rx - 1, ry - 1);
//		printf("%d\n", walk[rx-1][ry-1]);
//		
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}