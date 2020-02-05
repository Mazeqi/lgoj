//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//int map[15][15] = {0};//这是地图
//int vis[15][15] = {0};//这是记录某一个点有没有被访问过
//int walk[5] = { -1,0,1,0,-1 };//行走方向
//
////记录总路径
//int sum = 0;
//
////启点坐标
//int SX, SY;
//
////终点坐标
//int FX, FY;
//
////N*M行
//int N, M, T;
//void dfs(int dx, int dy)
//{
//	if (dx == FX && dy == FY)
//	{
//		sum++;
//		return;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		int lx = dx + walk[i];
//		int ry = dy + walk[i + 1];
//
//		if (lx >= 1 && ry >= 1 && lx<=N && ry<=M && !map[lx][ry] && !vis[lx][ry])
//		{
//			vis[lx][ry] = 1;
//			dfs(lx, ry);
//			vis[lx][ry] = 0;
//		}
//	}
//	return;
//}
//
//int main()
//{
//
//	scanf("%d%d%d",&N,&M,&T);
//
//	
//	scanf("%d%d",&SX,&SY);
//	map[SX][SY] = 1;
//
//	
//	scanf("%d%d",&FX,&FY);
//
//	int TX, TY;
//	while (T--)
//	{
//		scanf("%d%d", &TX,&TY);
//		map[TX][TY] = 1;
//	}
//		
//	
//	dfs(SX, SY);
//
//	printf("%d\n",sum);
//
//
//	system("pause");
//	return 0;
//}