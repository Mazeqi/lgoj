//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
////节点个数
//long long n;
//long long f[50][50] = { 0 }, root[50][50] = { 0 };
//
////这里由于矩阵摆放的位置有点奇怪，具体要看算法导论第229-230页
//void print(long long left, long long right)
//{
//	if (left > right)
//	{
//		return;
//	}
//	printf("%lld ", root[left][right]);
//	print(left, root[left][right] - 1);
//	print(root[left][right] + 1, right);
//}
//
//int dfs(long long left, long long right)
//{
//	//左子树空，就返回分数一
//	if (left > right)return 1;
//
//	//记忆搜索
//	if (f[left][right])return f[left][right];
//	for (int k = left; k <= right; k++)
//	{
//		//枚举根节点作为起点
//		int t = dfs(left, k - 1)*dfs(k + 1, right) + f[k][k];
//		if (t > f[left][right])
//		{
//			f[left][right] = t;
//			root[left][right] = k;
//		}
//	}
//	return f[left][right];
//}
//int main()
//{
//	scanf("%lld", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld", &f[i][i]);
//		root[i][i] = i;
//	}
//	printf("%d\n", dfs(1, n));
//	print(1, n);
//	system("pause");
//	return 0;
//}