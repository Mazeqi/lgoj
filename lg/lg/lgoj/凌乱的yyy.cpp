//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//struct game
//{
//	int ai;
//	int bi;
//}games[100000];
//
//int cmp(struct game a,struct game b)
//{
//	return a.bi < b.bi;
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d",&games[i].ai,&games[i].bi);
//	}
//	sort(games + 1, games + n + 1, cmp);
//	int i = 1;
//	int j = 2;
//	int sum = 1;	
//	while (j<=n)
//	{
//		if (games[i].bi <= games[j].ai)
//		{
//			sum++;
//			i = j;
//		}
//		j++;
//		
//	}
//	printf("%d\n",sum);
//	
//	system("pause");
//	return 0;
//}