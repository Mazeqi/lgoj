//#include<stdio.h>
//#define MAX 10000
//int main()
//{
//	int n = 0;
//	long map[MAX][4] = { 0 };
//	int t = 0;
//	scanf("%d", &n);
//	for (int i=0;i<n;i++)
//	{
//		scanf("%d%d%d%d", &map[i][0], &map[i][1], &map[i][2], &map[i][3]);
//		map[i][2] += map[i][0];
//		map[i][3] += map[i][1];
//	}
//	int x, y;
//	scanf("%d%d",&x,&y);
//	for (int i = 0; i < n; i++)
//	{
//		if (map[i][0] <= x && x <= map[i][2] && map[i][1] <= y && map[i][3] >= y)
//		{
//			t = i + 1;
//		}
//	}
//	if (t == 0)
//	{
//		printf("-1\n");
//	}
//	else
//	{
//		printf("%d\n",t);
//	}
//
//
//	system("pause");
//	return 0;
//}