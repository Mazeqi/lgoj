//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct site
//{
//	//用来记录有数的位置
//	int x, y;
//};
//struct site sites[100000];
//
//int main()
//{
//	int K, M, N;
//
//	int map;
//	//记录数以及数的多少
//	int remesite[10000] = { 0 };
//	int remesites = 0;
//
//	scanf("%d%d%d", &M, &N, &K);
//	for (int i = 1; i <= M; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			scanf("%d", &map);
//			if (map > 0)
//			{
//				sites[map].x = i;
//				sites[map].y = j;
//				remesite[remesites++] = map;
//			}
//		}
//	}
//	sort(remesite, remesite + remesites, greater<int>());
//	int timelimits = 0;
//	int apples = 0;
//	int times = 0;
//
//	while (timelimits < K)
//	{
//		if (times >= remesites)
//		{
//			break;
//		}
//		if (timelimits == 0)
//		{
//			timelimits = timelimits + sites[remesite[times]].x + 1;
//			int outx = 0;
//		    outx = sites[remesite[times]].x;
//			if (timelimits < K&&timelimits + outx <= K)
//			{
//				apples += remesite[times];
//				times++;
//			}
//			
//		}
//		else if (timelimits < K)
//		{
//			timelimits = timelimits + abs(sites[remesite[times]].y - sites[remesite[times - 1]].y) + abs(sites[remesite[times]].x - sites[remesite[times - 1]].x) + 1;
//			int outx = 0;
//		    outx = sites[remesite[times]].x;
//			if (timelimits < K&&  timelimits + outx  <= K)
//			{
//				apples += remesite[times];
//				times++;
//			}
//			
//		}
//	}
//	printf("%d\n", apples);
//	system("pause");
//	return 0;
//}