//#include<stdio.h>
//long long num[500005];
//long long temp[500005];
//long long ans;
//void merge(int l, int mid, int r)
//{
//	int i = l;
//	int j = mid + 1;
//	int k = l;
//	while (i <= mid && j <= r)
//	{
//		if (num[i] <= num[j])
//			temp[k++] = num[i++];
//		else
//		{
//			ans += j - k;//从k开始的地方后边的数都与第j个数成逆序数，所以要j-k
//			temp[k++] = num[j++];
//		}
//	}
//	while (i <= mid)
//		temp[k++] = num[i++];
//	while (j <= r)
//		temp[k++] = num[j++];
//	for (i = l; i <= r; i++)
//		num[i] = temp[i];
//}
//void mergesort(int a, int b)
//{
//	if (a < b)
//	{
//		int mid = (a + b) / 2;
//		mergesort(a, mid);
//		mergesort(mid + 1, b);
//		merge(a, mid, b);
//	}
//}
//int main()
//{
//	long long n, i;
//	scanf("%lld", &n);
//	ans = 0;
//	for (int i = 0; i < n; i++)
//		scanf("%lld", &num[i]);
//	mergesort(0, n - 1);
//	printf("%lld\n", ans);
//	return 0;
//}