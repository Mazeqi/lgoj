//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//int pi[30001];
//
//int main()
//{
//	//每组纪念品价格之和的上限
//	int w;
//	scanf("%d",&w);
//
//	//购买的纪念品的总件数G
//	int n;
//	scanf("%d",&n);
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&pi[i]);
//	}
//
//	sort(pi+1,pi+1+n);
//	int j = 1, k = n;
//
//	//记录多少个组
//	int sum = 0;
//	while (j <= k)
//	{
//		if (pi[j] + pi[k] <= w)
//		{
//			j++;
//			k--;
//			sum += 1;
//		}
//		else
//		{
//			k--;
//			sum += 1;
//		}
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}