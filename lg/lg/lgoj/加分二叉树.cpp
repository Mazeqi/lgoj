//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
////节点个数
//long long n;
//long long f[50][50], root[50][50];
//
////这里由于矩阵摆放的位置有点奇怪，具体要看算法导论第229-230页
//void print(long long left,long long right)
//{
//	if (left > right)
//	{
//		return;
//	}
//	printf("%lld ",root[left][right]);
//	print(left, root[left][right] - 1);
//	print(root[left][right] + 1, right);
//}
//
//int main()
//{
//	scanf("%lld",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld",&f[i][i]);
//		f[i][i - 1] = 1;
//		root[i][i] = i;
//	}
//	for (int len = 1; len < n; len++)
//	{
//		for (int i = 1; i + len <= n; i++)
//		{
//			int j = i + len;
//			f[i][j] = f[i + 1][j] + f[i][i];
//			root[i][j] = i;
//			for (int k = i+1 ; k < j; k++)
//			{
//				if (f[i][j] < f[i][k - 1] * f[k + 1][j] + f[k][k])
//				{
//					f[i][j] = f[i][k - 1] * f[k + 1][j] + f[k][k];
//					root[i][j] = k;
//				}
//			}
//		}
//	}
//	printf("%lld\n",f[1][n]);
//	print(1, n);
//	system("pause");
//	return 0;
//}