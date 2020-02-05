//#include<algorithm>
//#include<cstdio>
//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//
//
//
//struct map {
//	int x, y, vismap[6][6];
//};
//
//map bf;
//int T;//T处障碍
//int sum = 0;//总数
//int fx, fy;//终点
//int vis[6][6] = { 0 };//记录障碍
//int n, m;//n行m列
//int stx, sty;//起点
//
//void bfs()
//{
//	queue<struct map>que;
//	que.push(bf);
//
//	//下一步
//	int next[4][2] = {
//		{0,1},
//		{1,0},
//		{0,-1},
//		{-1,0}
//	};
//
//	while (!que.empty())
//	{
//		map now = que.front();
//		for (int i = 0; i <= 3; i++)
//		{
//			int nx = now.x + next[i][0];
//			int ny = now.y + next[i][1];
//			if (now.vismap[nx][ny] || vis[nx][ny] || nx == 0 || ny == 0 || nx > n || ny > m)
//			{
//				continue;
//			}
//			if (nx == fx && fy == ny)
//			{
//				sum++;
//				continue;
//			}
//			bf.x = nx;
//			bf.y = ny;
//			memcpy(bf.vismap, now.vismap, sizeof(now.vismap));
//			bf.vismap[nx][ny] = 1;
//			que.push(bf);
//		}
//		que.pop();
//	}
//
//}
//int main()
//{
//	scanf("%d%d%d",&n,&m,&T);
//
//	scanf("%d%d",&stx,&sty);
//	bf.x = stx;
//	bf.y = sty;
//	bf.vismap[stx][sty] = 1;
//
//	scanf("%d%d", &fx, &fy);
//
//	//障碍
//	int tx, ty;
//	for (int i = 1; i <= T; i++)
//	{
//		scanf("%d%d",&tx,&ty);
//		vis[tx][ty] = 1;
//	}
//	bfs();
//
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}