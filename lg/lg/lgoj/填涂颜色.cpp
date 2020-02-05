//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//int map[50][50] = {0};
//
////矩阵的大小
//int n;
//
//
//int main()
//{
//
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}		
//	}
//	
//
//	queue<int> qx, qy;
//	int next[4][2] = { {0,1},//向右走
//				{1,0},//向下走
//				{0,-1},//向左走
//				{-1,0} };//向上走
//	int x, y;
//	qx.push(0);
//	qy.push(0);
//	while (!qx.empty())
//	{
//		//枚举四个方向
//		for (int i = 0; i <= 3; i++)
//		{
//			x = qx.front() + next[i][0];
//			y = qy.front() + next[i][1];
//			if (x>=0 && x<=n + 1 && y>=0 && y<=n + 1 && map[x][y] == 0)
//			{
//				map[x][y] = 2;
//				qx.push(x);
//				qy.push(y);
//			}
//			
//		}
//		qx.pop();
//		qy.pop();
//	}
//
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%d ",2-map[i][j]);
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}