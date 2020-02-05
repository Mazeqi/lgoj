//#include<stdio.h>
//#define MAX 25
//long long map[MAX][MAX] = {0};
//long long dist[MAX][MAX] = {0};
//int n, m, x, y;
//int horse[9][2] = { {0,0} ,{1,2} ,{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1} };
//int main()
//{
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for (int i = 0; i < 9; i++)
//	{
//		if (x + horse[i][0] <= n && x + horse[i][0] >= 0)
//		{
//			if (y + horse[i][1] <= m && y + horse[i][1] >= 0)
//			{
//				map[x + horse[i][0]][y + horse[i][1]] = 1;
//			}
//		}
//	}
//	int k = 1;
//	for (int i = 0; i <= m; i++)
//	{
//		if (map[0][i] == 1)
//		{
//			 k=0;
//		}
//		dist[0][i] = k;
//	}
//	k = 1;
//	for (int i = 0; i <= n; i++)
//	{
//		if (map[i][0] == 1)
//		{
//			k = 0;
//		}
//		dist[i][0] = k;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <=m; j++)
//		{
//			if (map[i][j] == 1)
//			{
//				dist[i][j] = 0;
//			}
//			else
//			{
//				dist[i][j] = dist[i - 1][j] + dist[i][j - 1];
//			}
//		}
//	}
//	printf("%ld\n",dist[n][m]);
//	system("pause");
//	return 0;
//}