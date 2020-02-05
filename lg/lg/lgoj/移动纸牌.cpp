//#include<iostream>
//#include<cstdio>
//
//int main()
//{
//
//	int n;
//	int card[100000] = { 0 };
//	int sum = 0;
//	int times = 0;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&card[i]);
//		sum += card[i];
//	}
//	sum /= n;
//	for (int i = 1; i <= n; i++)
//	{
//		if (card[i] - sum)
//		{
//			card[i + 1] += card[i] - sum;
//			times++;
//		}
//	}
//	printf("%d\n",times);
//	system("pause");
//	return 0;
//}