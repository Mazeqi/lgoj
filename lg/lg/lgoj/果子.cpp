//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<stack>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	int a[10001];
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sort(a + 1, a + 1 + n);
//	int sum = 0;
//	for (int i = 1; i <= n-1; i++)
//	{
//		sum += a[i] + a[i + 1];
//		a[i + 1] = a[i] + a[i + 1];
//		for (int j = i + 1; j <= n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//			else
//				break;
//		}
//	}
//	
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
