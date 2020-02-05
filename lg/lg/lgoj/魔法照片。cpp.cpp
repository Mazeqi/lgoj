//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//struct person
//{
//	int D;
//	int W;
//	int classD;
//}people[100000];
//
//int com(struct person a, struct person b)
//{
//	if (a.W > b.W)
//	{
//		return 1;
//	}
//	else if (a.W == b.W)
//	{
//		if (a.D < b.D)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d",&n,&k);
//	int E[11];
//	for (int i = 1; i < 11; i++)
//	{
//		scanf("%d",&E[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&people[i].W);
//		people[i].D = i;
//
//	}
//	sort(people+1,people+n+1,com);
//
//	for (int i = 1; i <= n; i++)
//	{
//		people[i].classD = (i - 1) % 10 + 1;
//		//第i类要加上第i类的那啥
//		people[i].W += E[people[i].classD];
//	}
//	sort(people + 1, people + n + 1, com);
//	for (int i = 1; i <=k; i++)
//	{
//			printf("%d ",people[i].D);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}